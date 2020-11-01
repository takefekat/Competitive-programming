#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vecll;
typedef vector<ld> vecld;

ll rec(vecll &a, vector<vecll> &dp, ll f, ll e, ll turn)
{
    if (f > e or e < 0 or f >= a.size())
    {
        return 0;
    }
    if (dp[f][e] != INT_MAX)
    {
        return dp[f][e];
    }

    ll res = 0;
    if (turn == 0)
    {
        res = max(rec(a, dp, f + 1, e, (turn == 1 ? 0 : 1)) + a[f],
                  rec(a, dp, f, e - 1, (turn == 1 ? 0 : 1)) + a[e]);
    }
    else
    {
        res = min(rec(a, dp, f + 1, e, (turn == 1 ? 0 : 1)) - a[f],
                  rec(a, dp, f, e - 1, (turn == 1 ? 0 : 1)) - a[e]);
    }
    return dp[f][e] = res;
}
void solve(long long N, std::vector<long long> a)
{
    vector<vecll> dp(N, vecll(N, INT_MAX));
    ll ans = rec(a, dp, 0, N - 1, 0);
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
