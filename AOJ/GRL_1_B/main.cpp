#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct Edge {
    ll to;
    ll w;
    Edge(ll to, ll w) : to(to), w(w) {}
};
using Graph = vector<vector<Edge>>;

int main() {
    ll V, E, r;
    cin >> V >> E >> r;
    Graph g(V);
    for (ll i = 0; i < E; i++) {
        ll s, t, d;
        cin >> s >> t >> d;
        g[s].push_back(Edge(t, d));
    }

    vll dist(V, INT_MAX);
    dist[r] = 0;
    for (ll i = 0; i <= V; i++) {
        bool update = false;

        for (ll j = 0; j < V; j++) {
            if (dist[j] == INT_MAX) continue;
            for (auto &&e : g[j]) {
                if (dist[e.to] > dist[j] + e.w) {
                    dist[e.to] = min(dist[e.to], dist[j] + e.w);
                    update = true;
                }
            }
        }
        if (update and i == V) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for (ll i = 0; i < V; i++) {
        if (dist[i] == INT_MAX)
            cout << "INF" << endl;
        else
            cout << dist[i] << endl;
    }
}