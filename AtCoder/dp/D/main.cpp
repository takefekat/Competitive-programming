#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

void solve(long long N, long long W, std::vector<long long> w, std::vector<long long> v)
{
    vector<vec> dp(N + 1, vec(W + 1, -1e+18));
    dp[0][0] = 0;
    for (ll i = 0; i < N; i++)
    {
        for (ll j = 0; j <= W; j++)
        {

            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
            if (j + w[i] <= W)
                dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
        }
    }
    ll ans = 0;
    for (ll i = 0; i <= W; i++)
    {
        ans = max(ans, dp[N][i]);
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
