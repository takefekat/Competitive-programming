#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
void solve(long long N, long long K, std::vector<long long> h)
{
    vec dp(N, 1e+18);
    dp[0] = 0;
    for (ll i = 0; i < N; i++)
    {
        for (ll k = 1; i + k < N and k <= K; k++)
        {
            dp[i + k] = min(dp[i + k], dp[i] + abs(h[i] - h[i + k]));
        }
    }
    cout << dp[N - 1] << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> h(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &h[i]);
    }
    solve(N, K, std::move(h));
    return 0;
}
