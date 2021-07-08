#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct Edge {
    int to;
    ll cost;
    Edge(ll t, ll c) : to(t), cost(c) {}
};

using Graph = vector<vector<Edge>>;

// 最遠点間距離と最遠点を求める
pair<ll, int> dfs(const Graph &G, int u, int par) {
    pair<ll, int> ret = make_pair(0, u);
    for (auto e : G[u]) {
        if (e.to == par) continue;
        auto next = dfs(G, e.to, u);
        next.first += e.cost;
        ret = max(ret, next);
    }
    return ret;
}

ll tree_diamiter(const Graph &G) {
    pair<ll, int> p = dfs(G, 0, -1);
    pair<ll, int> q = dfs(G, p.second, -1);
    return q.first;
}

void solve(long long N, std::vector<long long> A, std::vector<long long> B) {
    Graph g(N);
    for (ll i = 0; i < N - 1; i++) {
        g[A[i]].push_back(Edge(B[i], 1));
        g[B[i]].push_back(Edge(A[i], 1));
    }
    ll ans = tree_diamiter(g);
    cout << ans + 1 << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N - 1);
    std::vector<long long> B(N - 1);
    for (int i = 0; i < N - 1; i++) {
        std::scanf("%lld", &A[i]);
        A[i]--;
        std::scanf("%lld", &B[i]);
        B[i]--;
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
