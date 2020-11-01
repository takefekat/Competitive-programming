#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

void solve(long long N, long long W, std::vector<long long> w, std::vector<long long> v)
{
    const ll V = 100 * 1000;
    vector<vec> dp(N + 1, vec(V + 1, 1e+18));
    dp[0][0] = 0;
    for (ll i = 0; i < N; i++)
    {
        for (ll j = 0; j <= V; j++)
        {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            if (j + v[i] <= V)
                dp[i + 1][j + v[i]] = min(dp[i + 1][j + v[i]], dp[i][j] + w[i]);
        }
    }
    ll ans = 0;
    for (ll i = 0; i <= V; i++)
    {
        if (dp[N][i] <= W)
            ans = max(ans, i);
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long W;
    scanf("%lld", &W);
    std::vector<long long> w(N);
    std::vector<long long> v(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &w[i]);
        scanf("%lld", &v[i]);
    }
    solve(N, W, std::move(w), std::move(v));
    return 0;
}
