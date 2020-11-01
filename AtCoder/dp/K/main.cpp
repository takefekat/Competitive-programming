#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vecll;
typedef vector<ld> vecld;

void solve(long long N, long long K, std::vector<long long> a)
{
    vecll dp(K + 1, 0);
    dp[0] = 0;
    for (ll i = 0; i < K; i++)
    {
        for (ll j = 0; j < N; j++)
        {
            if (dp[i] == 0 and i + a[j] <= K)
                dp[i + a[j]] = 1;
        }
    }
    cout << (dp[K] == 0 ? "Second" : "First") << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }
    solve(N, K, std::move(a));
    return 0;
}
