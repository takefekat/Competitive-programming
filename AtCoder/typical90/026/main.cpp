#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

using Graph = vvll;

vvll dp;

void dfs(Graph& g, ll u, ll p, vll& res, ll f) {
    //    cout << "u: " << u << ", f: " << f << endl;
    if (f == 1) res.push_back(u);
    for (auto v : g[u]) {
        if (v == p) continue;
        dfs(g, v, u, res, (f + 1) % 2);
    }
}

void solve(long long N, std::vector<long long> A, std::vector<long long> B) {
    Graph g(N);
    for (ll i = 0; i < N - 1; i++) {
        g[A[i]].push_back(B[i]);
        g[B[i]].push_back(A[i]);
    }
    dp.assign(N, vll(2, 0));

    vll res;
    dfs(g, 0, -1, res, 0);
    if (res.size() < N / 2) {
        res.clear();
        dfs(g, 0, -1, res, 1);
    }

    for (ll i = 0; i < N / 2; i++) {
        cout << res[i] + 1;
        if (i == N / 2 - 1)
            cout << endl;
        else
            cout << " ";
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N - 1);
    std::vector<long long> B(N - 1);
    for (int i = 0; i < N - 1; i++) {
        std::scanf("%lld", &A[i]);
        A[i]--;
        std::scanf("%lld", &B[i]);
        B[i]--;
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
