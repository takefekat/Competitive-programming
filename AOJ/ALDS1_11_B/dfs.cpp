#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using Graph = vector<vector<ll>>;

void dfs(Graph& g, ll s, vector<ll>& d, vector<ll>& f) {
    ll time = 1;
    stack<ll> todo;

    todo.push(s);
    while (!todo.empty()) {
        ll u = todo.top();
        todo.pop();
        if (d[u] != 0) return;

        d[u] = time;
        time++;

        for (auto&& v : g[u]) {
            if (d[v] != 0) continue;
            todo.push(v);
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
        u--;
        for (ll j = 0; j < k; j++) {
            ll v;
            cin >> v;
            v--;  // 0-indexにする
            g[u].push_back(v);
        }
    }
    vector<ll> d(n, 0), f(n, 0);
    dfs(g, 0, d, f);
    for (ll i = 0; i < n; i++) {
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }
}
