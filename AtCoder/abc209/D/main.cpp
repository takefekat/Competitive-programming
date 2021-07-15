#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;

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

vll dp;

void bfs(const Graph g, ll s) {
    queue<pll> q;
    q.push(pll(s, -1));
    dp[s] = 0;
    while (q.size()) {
        ll u = q.front().first;
        ll p = q.front().second;
        q.pop();
        for (auto &&e : g[u]) {
            if (e.to == p) continue;
            dp[e.to] = (dp[u] + 1) % 2;
            q.push(pll(e.to, u));
        }
        // cout << u << " " << p << endl;
    }
}

int main() {
    ll N, Q;
    cin >> N >> Q;
    Graph g(N);
    for (ll i = 0; i < N - 1; i++) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(Edge(b, 1));
        g[b].push_back(Edge(a, 1));
    }

    dp.assign(N, -1);
    bfs(g, 0);
    for (auto &&e : dp) {
        // cout << e << " ";
    }

    for (ll i = 0; i < Q; i++) {
        ll c, d;
        scanf("%lld %lld", &c, &d);
        c--;
        d--;

        string ans = (dp[c] != dp[d] ? "Road" : "Town");
        cout << ans << endl;
    }
    return 0;
}
