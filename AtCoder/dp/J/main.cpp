#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<vld> vvld;
typedef vector<vvld> vvvld;

// dp[i][j][k] : 寿司の数が、1,2,3の皿がi,j,kこの時の全部なくなるまでの期待値
vvvld dp;

ld rec(ld one, ld two, ld thr, ld N) {
    if (one == 0 and two == 0 and thr == 0) {
        return dp[one][two][thr] = 0;
    }
    if (dp[one][two][thr] != -1) return dp[one][two][thr];
    ld res = 1 * (N - (one + two + thr)) / N;
    if (one > 0) res += (rec(one - 1, two, thr, N) + 1) * one / N;
    if (two > 0) res += (rec(one + 1, two - 1, thr, N) + 1) * two / N;
    if (thr > 0) res += (rec(one, two + 1, thr - 1, N) + 1) * thr / N;
    return dp[one][two][thr] = res;
}

void solve(long long N, std::vector<long long> a) {
    dp = vvvld(N + 1, vvld(N + 1, vld(N + 1, -1)));
    vll cnt(3, 0);
    for (ll i = 0; i < N; i++) cnt[a[i] - 1]++;
    ld ans = rec(cnt[0], cnt[1], cnt[2], N);
    printf("%.10Lf\n", ans);
}

signed main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
