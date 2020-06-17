#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Edge{
    ll target;
    ll weight;
};

struct State{
    ll node;
    ll sum_of_weight;

    bool operator < (const State& s)  const {
        return sum_of_weight > s.sum_of_weight;
    }
};

typedef vector<vector<Edge> > graph;

void dijkstra(graph &g, vector<ll>&d, ll start){

    priority_queue<State> pq;
    pq.push(State{start,0});

    while( pq.size() ){

        State s = pq.top(); pq.pop();

        if( d[s.node] != -1 ) continue;
        d[s.node] = s.sum_of_weight;

        for(auto edge: g[s.node]) {
            if( d[edge.target] != -1 ) continue;
            pq.push(State{edge.target, s.sum_of_weight + edge.weight});

        }
    }

}


int main(){

    ll N;
    cin >> N;

    graph G(N);
    for (int i = 0; i < N; i++)
    {
        ll u,k;
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            ll v,c;
            cin >> v >> c;
            G[u].push_back(Edge{v,c});
        }
    }

    vector<ll> d(N,-1);

    ll count = 1;
    dijkstra(G,d,0);

    for (int i = 0; i < N; i++)
    {
        cout << i << " " << d[i] << endl;
    }
    
}