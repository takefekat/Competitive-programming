#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using pll = pair<ll, ll>;

struct Edge {
    ll u, v, c, id;
    Edge(ll u, ll v, ll c, ll id) : u(u), v(v), c(c), id(id) {}
    bool operator<(const Edge& e) const { return c < e.c; }
};
using Graph = vector<vector<Edge>>;

ll v_cnt(Graph& g, ll u, ll p, set<ll>& used) {
    ll cnt = 1;
    for (auto&& e : g[u]) {
        if (e.v == p) continue;
        if (used.find(e.id) != used.end()) continue;
        cnt += v_cnt(g, e.v, u, used);
    }
    return cnt;
}

void solve(long long N, std::vector<long long> u, std::vector<long long> v,
           std::vector<long long> w) {
    Graph g(N);
    for (ll i = 0; i < N - 1; i++) {
        g[u[i]].push_back(Edge(u[i], v[i], w[i], i));
        g[v[i]].push_back(Edge(v[i], u[i], w[i], i));
    }

    priority_queue<Edge> pq;
    for (ll i = 0; i < N - 1; i++) {
        pq.push(Edge(u[i], v[i], w[i], i));
    }

    ll ans = 0;
    set<ll> used;
    while (pq.size()) {
        auto e = pq.top();
        pq.pop();

        used.insert(e.id);

        ans += e.c * v_cnt(g, e.u, e.v, used) * v_cnt(g, e.v, e.u, used);
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> u(N - 1);
    std::vector<long long> v(N - 1);
    std::vector<long long> w(N - 1);
    for (int i = 0; i < N - 1; i++) {
        std::scanf("%lld", &u[i]);
        u[i]--;
        std::scanf("%lld", &v[i]);
        v[i]--;
        std::scanf("%lld", &w[i]);
    }
    solve(N, std::move(u), std::move(v), std::move(w));
    return 0;
}
