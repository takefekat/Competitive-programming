#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<vector<ll>> graph;
ll cnt;
vector<ll> d, f;
void dfs(graph& g, ll v) {
    if (d[v] != -1) return;
    d[v] = cnt;
    cnt++;
    for (auto&& nxt : g[v]) {
        if (d[nxt] != -1) continue;
        dfs(g, nxt);
    }
    f[v] = cnt;
    cnt++;
}

int main() {
    ll n;
    cin >> n;
    graph g(n);

    for (ll i = 0; i < n; i++) {
        ll u, k;
        cin >> u >> k;
        for (ll j = 0; j < k; j++) {
            ll v;
            cin >> v;
            g[u - 1].push_back(v - 1);
        }
    }

    d.assign(n, -1);
    f.assign(n, -1);
    cnt = 1;
    for (ll i = 0; i < n; i++) {
        dfs(g, i);
    }

    for (ll i = 0; i < n; i++) {
        cout << i + 1 << " " << d[i] << " " << f[i] << endl;
    }
}
