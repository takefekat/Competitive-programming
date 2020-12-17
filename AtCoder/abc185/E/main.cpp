#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

signed main()
{
    ll N, M;
    cin >> N >> M;
    vll A(N), B(M);
    for (ll i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (ll i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    vvll dp(1010, vll(1010, 1e+9));
    dp[0][0] = 0;
    for (ll i = 0; i <= N; i++)
    {
        for (ll j = 0; j <= M; j++)
        {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + 1);
            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + 1);
            if (i != N and j != M and A[i] == B[j])
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
            else
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + 1);
        }
    }
    ll ans = dp[N][M];
    cout << ans << endl;

    return 0;
}
