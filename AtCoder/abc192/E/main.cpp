#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct state{
    ll v;
    ll c;
    bool operator < (const state& st) const {
        return c > st.c;
    }
};

struct edge{
    ll t;
    ll c;
    ll k;
};
typedef vector<vector<edge>> graph;

void solve(long long N, long long M, long long X, long long Y, std::vector<long long> A, std::vector<long long> B, std::vector<long long> T, std::vector<long long> K){

    graph g(N);
    for(ll i=0; i<M; i++) {
        g[A[i]].push_back({B[i], T[i], K[i]});
        g[B[i]].push_back({A[i], T[i], K[i]});
    }

    priority_queue<state> pq;
    vll sp_cost(N,-1);
    pq.push({X,0});
    while(pq.size()){
        state cur = pq.top(); pq.pop();
 
        if(sp_cost[cur.v] != -1) continue;
        sp_cost[cur.v] = cur.c;

        for(auto &&e : g[cur.v]) {
            if(sp_cost[e.t] != -1) continue;
            pq.push({e.t, ((cur.c + e.k - 1) / e.k * e.k) + e.c });
        }
    }
    cout << sp_cost[Y] << endl;
    return;
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long X;
    scanf("%lld",&X); X--;
    long long Y;
    scanf("%lld",&Y); Y--;
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    std::vector<long long> T(M);
    std::vector<long long> K(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&A[i]); A[i]--;
        scanf("%lld",&B[i]); B[i]--;
        scanf("%lld",&T[i]);
        scanf("%lld",&K[i]);
    }
    solve(N, M, X, Y, std::move(A), std::move(B), std::move(T), std::move(K));
    return 0;
}
