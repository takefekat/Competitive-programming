#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vecll;
typedef vector<ld> vecld;

//in1: N=1,a ={1, 1, 1}
// 1回目：1*3 = 1
// 2回目：1*2/3 + 2*1/3*2/3 + 3*1/3*1/3*2/3 + ...
//       = 2/3 * (1 + 2*1/3 + 3*(1/3)^2 + ...)
//       = 2/3 * sigma(i=0...inf) i (1/3)^(i-1)
//       = 2/3 * 3 * sigma(i=0...inf) i (1/3)^i
//       = 2/3 * 3 * 3/4
//       = 3/2
// 2回目：1*1/3 + 2*2/3*1/3 + 3*2/3*2/3*1/3 + ...
//       = 1/3 * (1 + 2*2/3 + 3*(2/3)^2 + ...)
//       = 1/3 * sigma(i=0...inf) i (2/3)^(i-1)
//       = 1/3 * 3/2 * sigma(i=0...inf) i (2/3)^i
//       = 1/3 * 3/2 * 6
//       = 1/3 * 3/2 * 6
//       = 3
//
// sigma(i=1...inf) = r/(1-r)^2

ld rec(ll N, ll thr, ll two, ll one, vector<vector<vecld>> &dp)
{
    if (dp[thr][two][one] != -1)
        return dp[thr][two][one];

    ld res = 1;

    if (thr - 1 >= 0)
        res += (ld)thr / N * rec(N, thr - 1, two + 1, one, dp);
    if (two - 1 >= 0)
        res += (ld)two / N * rec(N, thr, two - 1, one + 1, dp);
    if (one - 1 >= 0)
        res += (ld)one / N * rec(N, thr, two, one - 1, dp);
    res *= (ld)N / (thr + two + one);

    return dp[thr][two][one] = res;
}

// N枚の皿に1つだけ寿司がある場合の期待値
// 1 x 1/N + 2 x (N-1)/N x 1/N
void solve(long long N, std::vector<long long> a)
{
    // dp[i][j][k]: 寿司の数が3,2,1個の時の期待値
    vector<vector<vecld>> dp(301, vector<vecld>(301, vecld(301, -1)));
    ll one = 0, two = 0, three = 0;
    for (auto &&e : a)
    {
        if (e == 1)
            one++;
        if (e == 2)
            two++;
        if (e == 3)
            three++;
    }

    dp[0][0][0] = 0;
    ld ans = rec(N, three, two, one, dp);
    printf("%.10Lf\n", ans);
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
