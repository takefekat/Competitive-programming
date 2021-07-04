#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct Edge {
    ll v;
    ll d;
    Edge(ll v, ll d) : v(v), d(d) {}
};
using Graph = vector<vector<Edge>>;

struct state {
    ll d;
    ll v;
    state(ll d, ll v) : d(d), v(v) {}
    bool operator<(const state& s) const { return d > s.d; }
};

vll dijkstra(Graph& g, ll start) {
    vll used(g.size(), -1);
    vll shortpath(g.size(), INT_MAX);

    shortpath[start] = 0;
    priority_queue<state> que;
    que.push(state(0, start));

    while (que.size()) {
        ll u = que.top().v;
        ll d = que.top().d;
        que.pop();

        if (used[u] != -1) continue;
        used[u] = 1;
        shortpath[u] = d;

        for (auto&& e : g[u]) {
            if (shortpath[e.v] > d + e.d) {
                que.push(state(d + e.d, e.v));
            }
        }
    }

    return shortpath;
}

int main() {
    // 入力
    ll V, E, r;
    cin >> V >> E >> r;

    Graph g(V);  // 隣接リスト
    for (ll i = 0; i < E; i++) {
        ll s, t, d;
        cin >> s >> t >> d;
        g[s].push_back(Edge(t, d));
    }

    vll ans = dijkstra(g, r);
    for (auto&& d : ans) {
        if (d == INT_MAX)
            cout << "INF" << endl;
        else
            cout << d << endl;
    }
    return 0;
}
