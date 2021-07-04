#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct Edge {
    ll v;
    ll c;
    ll d;
    Edge(ll v, ll c, ll d) : v(v), c(c), d(d) {}
};
using Graph = vector<vector<Edge>>;

struct state {
    ll time;
    ll v;
    state(ll time, ll v) : time(time), v(v) {}
    bool operator<(const state& s) const { return time > s.time; }
};

vll dijkstra(Graph& g, vll& t, ll start, ll goal) {
    vll path(g.size(), INT_MAX);
    priority_queue<state> que;

    que.push(state(0, start));

    while (que.size()) {
        ll cur_time = que.top().time;
        ll u = que.top().v;
        que.pop();
        // cout << u << ":" << cur_time << endl;

        if (path[u] != INT_MAX) continue;
        path[u] = cur_time;

        if (u == goal) break;
        cur_time += t[u];

        for (auto&& e : g[u]) {
            ll nxt_time = e.c;
            nxt_time +=
                (cur_time % e.d ? (cur_time / e.d + 1) * e.d : cur_time);
            if (path[e.v] > nxt_time) {
                // cout << "  " << u << "->" << e.v << ":" << nxt_time << endl;
                que.push(state(nxt_time, e.v));
            }
        }
    }

    return path;
}

int main() {
    ll N, M, K;
    cin >> N >> M >> K;
    vll t(N, 0);
    for (ll i = 1; i < N - 1; i++) cin >> t[i];

    Graph g(N);
    for (ll i = 0; i < M; i++) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        a--;
        b--;
        g[a].push_back(Edge(b, c, d));
        g[b].push_back(Edge(a, c, d));
    }

    vll path = dijkstra(g, t, 0, N - 1);
    if (path[N - 1] == INT_MAX or path[N - 1] > K)
        cout << -1 << endl;
    else
        cout << path[N - 1] << endl;
    return 0;
}
