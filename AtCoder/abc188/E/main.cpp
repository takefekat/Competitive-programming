#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vll tsort(vvll &g) {
    ll V = g.size();
    vll indeg(V, 0);
    stack<ll> S;

    for (auto &&u : g)
        for (auto &&v : u) indeg[v]++;

    for (ll i = 0; i < V; i++)
        if (indeg[i] == 0) S.push(i);

    vll ans;
    while (S.size() > 0) {
        ll u = S.top();
        S.pop();
        ans.emplace_back(u);
        for (auto &&v : g[u]) {
            indeg[v]--;
            if (indeg[v] == 0) S.push(v);
        }
    }
    return ans;
}

ll rec(vvll &g, ll u, vll &maxcost, vll &a) {
    if (g[u].size() == 0) {
        return maxcost[u] = a[u];
    }
    if (maxcost[u] > -(1e+15)) return maxcost[u];

    ll res = -(1e+15);
    for (auto &&v : g[u]) {
        res = max(res, max(a[u], rec(g, v, maxcost, a)));
    }
    return maxcost[u] = res;
}

int main() {
    ll N, M;
    cin >> N >> M;

    vll a(N);
    for (ll i = 0; i < N; i++) {
        cin >> a[i];
    }
    vvll g(N);
    for (ll i = 0; i < M; i++) {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
    }

    vll maxcost(N, -(1e+15));
    for (ll i = 0; i < N; i++) {
        rec(g, i, maxcost, a);
    }

    for (auto &&e : maxcost) {
        // cout << e << endl;
    }

    ll ans = -(1e+15);
    for (ll u = 0; u < N; u++) {
        for (auto &&v : g[u]) {
            ans = max(ans, maxcost[v] - a[u]);
        }
    }
    cout << ans << endl;
    return 0;
}
