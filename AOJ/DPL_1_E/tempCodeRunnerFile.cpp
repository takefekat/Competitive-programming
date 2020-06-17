#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*******************
 * Dynamic Programming Algorithm for Solving Edit Distance
 * Input:   string s1, string s2
 * Output:  Edit Distance between s1 and s2. (Levenshtein Distance)
 * Time Complexity:     O(NM)
 * Space Complexity:    O(MAX(N,M))
********************/
int DP_NM(string& s1, string& s2){

    // N * M のDPテーブル作成
    int N = max(s1.length(), s2.length());
    vector<int> dptable_next(N+1), dptable_curr(N+1,0);

    for (int i = 0; i <= s1.length(); i++)
        dptable_curr[i] = i;

    for (int i = 1; i < s1.length()+1; i++)
    {
        for (int j = 1; j < s2.length()+1; j++)
        {
            dptable_next[j] = min(dptable_curr[j-1] + 1, dptable_curr[j] + 1 );
            dptable_next[j] = min(dptable_next[j], dptable_curr[j-1] + (s1[i-1] == s2[j-1] ? 0:1));
        }
    }

    return dptable_next[s2.length()];
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
    int ans = DP_NM(s1,s2);
    cout << ans << endl;

    return 0;
}