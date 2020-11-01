#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<ll> vec;
typedef vector<vec> graph;

ll memo_rec(long long u, graph &g, vec &dp)
{
    if (dp[u] != -1)
        return dp[u];

    ll ans = 0;
    for (auto &&v : g[u])
    {
        ans = max(ans, memo_rec(v, g, dp) + 1);
    }
    dp[u] = ans;
    return ans;
}

// メモ化再帰で解く
void solve(long long N, long long M, graph &g)
{
    ll ans = 0;
    vec dp(N, -1); // dp[i]: i を始点とする最長路
    for (ll i = 0; i < N; i++)
    {
        ans = max(ans, memo_rec(i, g, dp));
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> x(M);
    std::vector<long long> y(M);
    graph g(N);
    for (int i = 0; i < M; i++)
    {
        scanf("%lld", &x[i]);
        scanf("%lld", &y[i]);
        x[i]--;
        y[i]--;
        g[x[i]].push_back(y[i]);
    }

    solve(N, M, g);
    return 0;
}
