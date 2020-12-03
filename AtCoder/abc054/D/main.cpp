#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;

int main()
{
    ll N, Ma, Mb;
    cin >> N >> Ma >> Mb;
    vll a(N), b(N), c(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }

    vvvll dp(N + 1, vvll(411, vll(411, 1e+10)));

    dp[0][0][0] = 0;
    for (ll i = 0; i < N; i++)
    {
        for (ll j = 0; j <= 400; j++)
        {
            for (ll k = 0; k <= 400; k++)
            {
                dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
                dp[i + 1][j + a[i]][k + b[i]] = min(dp[i + 1][j + a[i]][k + b[i]], dp[i][j][k] + c[i]);
            }
        }
    }

    ll ans = 1e+10;
    for (ll j = 1; j <= 410; j++)
    {
        for (ll k = 1; k <= 410; k++)
        {
            if (Ma * k == Mb * j) // Ma:Mb=j:k
                ans = min(ans, dp[N][j][k]);
        }
    }

    cout << (ans == 1e+10 ? -1 : ans) << endl;
}