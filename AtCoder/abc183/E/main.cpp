#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;
typedef vector<vecll> vvll;

const long long MOD = 1000000007;

signed main()
{

    ll H, W;
    cin >> H >> W;
    vector<string> m(H);
    for (ll i = 0; i < H; i++)
    {
        cin >> m[i];
    }
    vvll dp(H, vecll(W, 0));
    vector<vvll> sum(H, vvll(W, vecll(3, 0)));
    dp[0][0] = 1;
    sum[0][0][0] = sum[0][0][1] = sum[0][0][2] = dp[0][0];
    for (ll i = 0; i < H; i++)
    {
        for (ll j = 0; j < W; j++)
        {
            if (m[i][j] == '#')
            {
                dp[i][j] = 0;
                sum[i][j][0] = sum[i][j][1] = sum[i][j][2] = 0;
            }
            else
            {
                // dpの更新
                if (i > 0)
                { // 上
                    dp[i][j] += sum[i - 1][j][0];
                    dp[i][j] %= MOD;
                }
                if (j > 0)
                { // 左
                    dp[i][j] += sum[i][j - 1][1];
                    dp[i][j] %= MOD;
                }
                if (i > 0 and j > 0)
                { // 左上
                    dp[i][j] += sum[i - 1][j - 1][2];
                    dp[i][j] %= MOD;
                }

                // sumの更新
                sum[i][j][0] = sum[i][j][1] = sum[i][j][2] = dp[i][j];
                if (i > 0)
                    sum[i][j][0] += sum[i - 1][j][0];
                if (j > 0)
                    sum[i][j][1] += sum[i][j - 1][1];
                if (i > 0 and j > 0)
                    sum[i][j][2] += sum[i - 1][j - 1][2];
            }
        }
    }

    cout << dp[H - 1][W - 1] << endl;
    return 0;
}
