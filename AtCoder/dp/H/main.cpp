#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> graph;

const long long MOD = 1000000007;

void solve(long long H, long long W, vector<string> &a)
{
    vector<vec> dp(H, vec(W, 0));
    dp[0][0] = 1;
    for (ll i = 0; i < H; i++)
    {
        for (ll j = 0; j < W; j++)
        {
            if (i + 1 <= H - 1 and a[i][j] == '.')
            {
                dp[i + 1][j] += dp[i][j];
                dp[i + 1][j] %= MOD;
            }
            if (j + 1 <= W - 1 and a[i][j] == '.')
            {
                dp[i][j + 1] += dp[i][j];
                dp[i][j + 1] %= MOD;
            }
        }
    }
    cout << dp[H - 1][W - 1] << endl;
}

signed main()
{
    long long H;
    scanf("%lld", &H);
    long long W;
    scanf("%lld", &W);
    vector<string> a(H);
    for (int i = 0; i < H; i++)
    {
        std::cin >> a[i];
    }
    solve(H, W, a);
    return 0;
}
