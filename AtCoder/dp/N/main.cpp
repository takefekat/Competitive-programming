#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

template <class T>
void chmin(T& a, T b) {
    if (a > b) a = b;
}
void solve(long long N, std::vector<long long> a) {
    // dp[i][j]: [i,j]スライムを統合した時のコストの和
    vvll dp(N, vll(N, 1LL << 62));

    // 累積和
    vll sum(N + 1, 0);
    sum[0] = 0;
    for (ll i = 1; i <= N; i++) sum[i] = sum[i - 1] + a[i - 1];

    // 初期条件
    for (ll i = 0; i < N; i++) dp[i][i] = 0;

    //区間の小さいところから求めていく
    for (ll w = 1; w < N; w++) {      // w:区間の長さ
        for (ll i = 0; i < N; i++) {  // i:区間の開始位置 [i,i+w]
            // dp[i][i+w]を求める
            if (i + w >= N) break;
            for (ll j = i; j < i + w; j++) {
                chmin(dp[i][i + w],
                      dp[i][j] + dp[j + 1][i + w] + sum[i + w + 1] - sum[i]);
            }
        }
    }
    cout << dp[0][N - 1] << endl;
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
