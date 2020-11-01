#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vecll;
typedef vector<ld> vecld;

void solve(long long N, std::vector<long double> p)
{
    vector<vecld> dp(N + 1, vecld(N + 1, 0)); // dp[i][j] : i個のコインを降ってj回表が出る確率
    dp[0][0] = 1;
    for (ll i = 0; i < N; i++)
    {
        for (ll j = 0; j <= N; j++)
        {
            if (j + 1 <= N)
                dp[i + 1][j + 1] += dp[i][j] * p[i];
            dp[i + 1][j] += dp[i][j] * (1 - p[i]);
        }
    }
    ld ans = 0;
    for (ll i = (N + 2) / 2; i <= N; i++)
    {
        ans += dp[N][i];
    }
    printf("%.10Lf\n", ans);
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long double> p(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%Lf", &p[i]);
    }
    solve(N, std::move(p));
    return 0;
}
