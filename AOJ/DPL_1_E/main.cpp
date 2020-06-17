#include <bits/stdc++.h>
using namespace std;

/*******************
 * Dynamic Programming Algorithm for Solving (only) Edit Distance
 * Input:   string s1, string s2
 * Output:  Edit Distance between s1 and s2 (Levenshtein Distance).
 * Time Complexity:     O(N * M), where N and M is length of s1 and s2, respectively.
 * Space Complexity:    O(MAX(N,M))
********************/
int EditDistanceDP(string& s1, string& s2){
    if(s1.length() < s2.length()) return EditDistanceDP(s2,s1);

    // DPテーブル作成
    vector<int> dptable_curr(s2.length()+1), dptable_next(s2.length()+1,0);

    // DPテーブル初期化
    for (int i = 0; i <= s2.length(); i++)
        dptable_curr[i] = i;

    // DP更新（時間計算量：O(NM)）
    for (int i = 1; i <= s1.length(); i++)
    {
        dptable_next[0] = dptable_curr[0] + 1;
        for (int j = 1; j <= s2.length(); j++)
        {
            dptable_next[j] = min(dptable_curr[j] + 1, dptable_next[j-1] + 1 );
            dptable_next[j] = min(dptable_next[j], dptable_curr[j-1] + (s1[i-1] == s2[j-1] ? 0:1));
        }
        swap(dptable_curr, dptable_next);
    }

    return dptable_curr[s2.length()];
}

/*******************
 * Dynamic Programming Algorithm for Solving Edit Distance
 * Input:   string s1, string s2
 * Output:  Edit Distance (with solution) between s1 and s2 (Levenshtein Distance).
 * Time Complexity:     O(N * M), where N and M is length of s1 and s2, respectively.
 * Space Complexity:    O(MAX(N,M))
********************/
int EditDistanceSpaceEfficientDP(string& s1, string& s2, vector<pair<int,int>>& answer){
    if(s1.length() < s2.length()) return EditDistanceSpaceEfficientDP(s2, s1,answer);

    return EditDistanceSpaceEfficientDPRec(s1, s2, 0, s1.length(), 0, s2.length(), answer );
}

int EditDistanceSpaceEfficientDPRec(string& s1, string& s2, int start_s1, int goal_s1, int start_s2, int goal_s2, vector<pair<int,int>>& answer){

    // 問題サイズ
    // TODO N,Mではなく、indexの差分にすべき
    const int M = goal_s1 - start_s1;
    const int N = goal_s2 - start_s2;

    // DPテーブル
    vector<int> dptable_curr(M+1), dptable_next(M+1,0);
    // 解復元用のテーブル
    vector<pair<int,int> > reached_mid_point_curr(M+1, {0,0}), reached_mid_point_next(M+1, {0,0});

    // DPテーブル初期化
    for (int i = 0; i <= M; i++){
        dptable_curr[i] = i;
    }

    // DP更新（時間計算量：O(NM)） -> 中間地点算出
    for (int i = 0; i < N; i++)
    {
        dptable_next[0] = dptable_curr[0] + 1;
        if( i == N/2 ){
            for (int j = 0; j < M; j++)
            {
                reached_mid_point_curr[j] = pair<int,int>{i,j};
            }
        }

        for (int j = 0; j < M; j++)
        {
            if(dptable_curr[j+1] + 1 < dptable_next[j] + 1){
                dptable_next[j+1] = dptable_curr[j+1] + 1;
                reached_mid_point_next[j+1] = reached_mid_point_curr[j+1];
            }
            else{
                dptable_next[j+1] = dptable_next[j] + 1;
                //reached_mid_point_next[j+1] = reached_mid_point_curr[j];
            }
            // TODO i,jのインデックスが再帰用になっていない
            if(dptable_next[j+1] > dptable_curr[j] + (s1[i] == s2[j] ? 0:1) ){
                dptable_next[j+1] = dptable_curr[j] + (s1[i] == s2[j] ? 0:1);
                reached_mid_point_next[j+1] = reached_mid_point_curr[j];
            }   
        }
        swap(dptable_curr, dptable_next);
        swap(reached_mid_point_curr, reached_mid_point_next);
    }

    // （再帰の終了条件）
    if(reached_mid_point_curr[M+1] == pair<int,int>{start_s1, start_s2} ){
        answer.push_back( reached_mid_point_curr[M+1] );
    }
    // 再帰的に解を求める
    else{
        // 再帰　
        int goal_s1_next = reached_mid_point_curr[M+1].first;
        int goal_s2_next = reached_mid_point_curr[M+1].second;
        EditDistanceSpaceEfficientDPRec(s1,s2,start_s1, goal_s1_next, start_s2, goal_s2_next, answer);
        EditDistanceSpaceEfficientDPRec(s1,s2,goal_s1_next, goal_s1, goal_s2_next, goal_s2, answer);
    }
    return dptable_curr[M+1];
}


struct State{
    int s1_index;
    int s2_index;
    int sum_of_reached_weight;
    int sum_of_prediction_weight;
    inline bool operator < (const State& tgt) const {
        return (sum_of_reached_weight + sum_of_prediction_weight == tgt.sum_of_reached_weight + tgt.sum_of_prediction_weight ? s1_index+s2_index>tgt.s1_index+tgt.s2_index :sum_of_reached_weight + sum_of_prediction_weight > tgt.sum_of_reached_weight + tgt.sum_of_prediction_weight );
    }
    inline bool operator ==(const State& tgt) const {
        return (s1_index == tgt.s1_index and s2_index == tgt.s2_index);
    }
    inline bool operator !=(const State& tgt) const {
        return !(this->operator  == (tgt));
    }
};

struct Hash {
    size_t operator()(const pair<int,int>& key) const;
};

inline size_t Hash::operator()(const pair<int,int>& key) const {
    string bytes = to_string(key.first) + to_string(key.second);
    return std::hash<std::string>()(bytes);
}

inline int heuristic(string&s1, string&s2, int s1_index, int s2_index){
    return abs(((int)s1.length() - s1_index) - ((int)s2.length() - s2_index));
}

int Astar_Search(string&s1, string&s2){

    priority_queue<State> pq;
    pq.push( State{ 0, 0, 0, abs((int)s1.size()-(int)s2.size()) } );
    //unordered_set<pair<int,int>, Hash> reached;
    set<pair<int,int>> reached;
    while ( pq.size() )       
    {
        State s = pq.top(); pq.pop();
        if( reached.count({s.s1_index, s.s2_index}) > 0 ) continue;
        reached.insert({s.s1_index,s.s2_index});
        if( s.s1_index == s1.length() and s.s2_index == s2.length() ) 
            return s.sum_of_reached_weight;
        
        if( reached.count({s.s1_index+1, s.s2_index}) == 0 )
            pq.push( State{s.s1_index+1, s.s2_index, s.sum_of_reached_weight+1, abs(((int)s1.length()-s.s1_index-1) - ((int)s2.length()-s.s2_index)) });
        if( reached.count({s.s1_index, s.s2_index+1}) == 0 )
            pq.push( State{s.s1_index, s.s2_index+1, s.sum_of_reached_weight+1, abs(((int)s1.length()-s.s1_index) - ((int)s2.length()-s.s2_index-1)) });
        if( reached.count({s.s1_index+1, s.s2_index+1}) == 0 )
            pq.push( State{s.s1_index+1, s.s2_index+1, s.sum_of_reached_weight+(s1[s.s1_index] == s2[s.s2_index]?0:1), abs(((int)s1.length()-s.s1_index-1) - ((int)s2.length()-s.s2_index-1)) });
    }
    
    return -1;
}

int Astar_Search2(string&s1, string&s2){

    priority_queue<State> pq;
    pq.push( State{ 0, 0, 0, abs((int)s1.size()-(int)s2.size()) } );

    vector<vector<bool>> reached(s1.size()+2,vector<bool>(s2.size()+2,false));

    while ( pq.size() )       
    {
        State s = pq.top(); pq.pop();
        if( reached[s.s1_index][s.s2_index] == true ) continue;
        reached[s.s1_index][s.s2_index] = true;
        if( s.s1_index == s1.length() and s.s2_index == s2.length() ) 
            return s.sum_of_reached_weight;
        
        if( reached[s.s1_index+1][s.s2_index] != true )
            pq.push( State{s.s1_index+1, s.s2_index, s.sum_of_reached_weight+1, heuristic(s1, s2, s.s1_index+1, s.s2_index)  });
        if( reached[s.s1_index][s.s2_index]+1 != true )
            pq.push( State{s.s1_index, s.s2_index+1, s.sum_of_reached_weight+1, heuristic(s1, s2, s.s1_index, s.s2_index+1) });
        if( reached[s.s1_index+1][s.s2_index+1] != true )
            pq.push( State{s.s1_index+1, s.s2_index+1, s.sum_of_reached_weight+(s1[s.s1_index] == s2[s.s2_index]?0:1), heuristic(s1, s2, s.s1_index+1, s.s2_index+1) });
    }
    
    return -1;
}



int main(){
    string s1,s2;
    cin >> s1 >> s2;
    //int ans = Astar_Search2(s1,s2);
    //int ans = EditDistanceDP(s1,s2);

    vector<pair<int,int>> answer;
    EditDistanceSpaceEfficientDPRec(s1, s2, answer);

    cout << ans << endl;

    return 0;
}