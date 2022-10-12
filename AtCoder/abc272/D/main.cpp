#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

struct Node{
    ll y, x;
};

struct Edge{
    Node src;
    Node tgt;
};

struct State{
    Node node;
    ll path_len;

    State(Node& n, ll p): node(n), path_len(p) {}
};

void bfs(Node& start, Node& goal, vector<ll>& seisuu){

    queue<State> node_queue;
    node_queue.push(State(start, 0));

    while(node_queue.size() > 0){

        State cur_node = node_queue.front();
        node_queue.pop();

        if (cur_node.node == goal) {
            cout << cur_node.path_len << endl;
            return;
        }

        for(auto& x : seisuu){
            ll k = i - x;
            ll l = cur_node.node.y + 
        }

    }

}

void solve(long long N, long long M){

    vector<ll> seisuu;
    for (ll i = 0; i <= M; i++) {
        if( sqrt(M - i*i) * sqrt(M - i*i) == M - i*i ) seisuu.push_back(i);
    }

    for(auto& x : seisuu) cout << x << endl;
    

    
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    solve(N, M);
    return 0;
}
