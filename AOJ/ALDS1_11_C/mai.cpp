#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using Graph = vector<vector<ll>>;

void bfs(Graph& g, ll s, vector<ll>& d) {
    queue<ll> todo;
    d[s] = 0;

    todo.push(s);
    while (!todo.empty()) {
        ll u = todo.front();
        todo.pop();

        for (ll v : g[u]) {
            if (d[v] != -1) continue;
            todo.push(v);
            d[v] = d[u] + 1;
        }
    }
}

int main() {
    ll n;
    cin >> n;
    Graph g(n);
    for (ll i = 0; i < n; i++) {
        ll u, k;
        cin >> u >> k;
        u--;  // 0-indexにする
        for (ll j = 0; j < k; j++) {
            ll v;
            cin >> v;
            v--;  // 0-indexにする
            g[u].push_back(v);
        }
    }
    vector<ll> d(n, -1);  // d[i]:頂点0から頂点iまでの最短経路長
    bfs(g, 0, d);
    for (ll i = 0; i < n; i++) {
        cout << i + 1 << " " << d[i] << endl;
    }
}
