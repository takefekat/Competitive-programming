#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
typedef vector<ld> vld;
typedef vector<vld> vvld;
typedef vector<vvld> vvvld;

vvvld dp(101, vvld(101, vld(101, 0)));

ld rec(ll A, ll B, ll C)
{
    if ((A < 0 or B < 0 or C < 0) or (A + B + C == 0))
        return 0.0;
    if (dp[A][B][C] != -1)
    {
        return dp[A][B][C];
    }
    if (A == 1 and B == 0 and C == 0)
        return dp[A][B][C] = 99.0;
    if (A == 0 and B == 1 and C == 0)
        return dp[A][B][C] = 99.0;
    if (A == 0 and B == 0 and C == 1)
        return dp[A][B][C] = 99.0;

    ld res = 0;
    res = (rec(A - 1, B, C) + 1) * (A - 1) / (A + B + C - 1) +
          (rec(A, B - 1, C) + 1) * (B - 1) / (A + B + C - 1) +
          (rec(A, B, C - 1) + 1) * (C - 1) / (A + B + C - 1);

    return dp[A][B][C] = res;
}

void solve(long long A, long long B, long long C)
{
    dp[0][0][1] = dp[0][1][0] = dp[1][0][0] = 99;
    for (ll sum = 2; sum <= 300; sum++)
    {
        for (ll a = 0; a <= min((ll)100, sum); a++)
        {
            for (ll b = 0; (a + b <= sum) and b <= 100; b++)
            {
                ll c = sum - a - b;
                if (c > 100)
                    continue;
                if (a > 0)
                    dp[a][b][c] += (dp[a - 1][b][c] + 1) * (a - 1) / (a + b + c - 1);
                if (b > 0)
                    dp[a][b][c] += (dp[a][b - 1][c] + 1) * (b - 1) / (a + b + c - 1);
                if (c > 0)
                    dp[a][b][c] += (dp[a][b][c - 1] + 1) * (c - 1) / (a + b + c - 1);
            }
        }
    }
    cout << dp[A][B][C] << endl;
}

signed main()
{
    long long A;
    scanf("%ldd", &A);
    long long B;
    scanf("%ldd", &B);
    long long C;
    scanf("%ldd", &C);
    solve(A, B, C);
    return 0;
}
