#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
typedef vector<ld> vld;
typedef vector<vld> vvld;
typedef vector<vvld> vvvld;

vvvld dp;

ld rec(ll A, ll B, ll C) {
    if (A == 100 or B == 100 or C == 100) {
        return dp[A][B][C] = 0;
    }
    if (dp[A][B][C] != -1) return dp[A][B][C];
    ld res = 0;
    res += (rec(A + 1, B, C) + 1) * (ld)A / (ld)(A + B + C);
    res += (rec(A, B + 1, C) + 1) * (ld)B / (ld)(A + B + C);
    res += (rec(A, B, C + 1) + 1) * (ld)C / (ld)(A + B + C);
    return dp[A][B][C] = res;
}

void solve(long long A, long long B, long long C) {
    dp = vvvld(101, vvld(101, vld(101, -1)));
    ld ans = rec(A, B, C);
    printf("%.10Lf\n", ans);
}

signed main() {
    long long A;
    scanf("%ldd", &A);
    long long B;
    scanf("%ldd", &B);
    long long C;
    scanf("%ldd", &C);
    solve(A, B, C);
    return 0;
}
