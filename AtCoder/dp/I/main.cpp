#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<ld> vld;
typedef vector<vld> vvld;

void solve(long long N, std::vector<long double> p) {
    // dp[i][j]：i番目までのコインを投げて、表がj回出る時の確率
    vvld dp(N + 1, vld(N + 1, 0));
    dp[0][0] = 1;

    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < N; j++) {
            // 表が出る時
            dp[i + 1][j + 1] += dp[i][j] * p[i];
            // 裏が出る時
            dp[i + 1][j] += dp[i][j] * (1 - p[i]);
        }
    }

    ld ans = 0;
    for (ll i = (N + 1) / 2; i <= N; i++) ans += dp[N][i];
    printf("%.10Lf\n", ans);
}

signed main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long double> p(N);
    for (int i = 0; i < N; i++) {
        scanf("%Lf", &p[i]);
    }
    solve(N, std::move(p));
    return 0;
}
