#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct Edge {
    ll v, w;
    Edge(ll v, ll w) : v(v), w(w) {}
    bool operator<(const Edge& e) const { return w > e.w; }
};
using Graph = vector<vector<Edge>>;

// Prim法
ll prim(const Graph& g) {
    // 到達ずみの頂点を管理する
    vll visted(g.size(), 0);

    // 重みが最小の辺を管理する
    priority_queue<Edge> pq;
    pq.push(Edge(0, 0));

    // 頂点0から順に隣接する辺のうち重み最小のものを、サイクルにならないように追加していく
    ll res = 0;
    while (pq.size()) {
        // 到達ずみの頂点から出る辺重み最小の辺：e
        Edge e = pq.top();
        pq.pop();

        // サイクルになる場合は、使用しない。
        if (visted[e.v]) continue;

        // サイクルにならない場合は（貪欲に）使用する
        res += e.w;

        // 新しく到達した頂点 e.v を到達済みにする
        visted[e.v] = true;

        // e.v から出る辺をpqに追加。ただし、サイクルになるものは追加しない。
        for (auto&& edge : g[e.v]) {
            if (!visted[edge.v]) pq.push(edge);
        }
    }
    return res;
}

int main() {
    ll V, E;
    cin >> V >> E;

    Graph g(V);
    for (ll i = 0; i < E; i++) {
        ll s, t, w;
        cin >> s >> t >> w;
        g[s].push_back(Edge(t, w));
        g[t].push_back(Edge(s, w));
    }

    ll ans = prim(g);
    cout << ans << endl;
}