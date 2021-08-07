#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll INF = 1LL << 60;
void solve(long long H, long long W, long long C,
           std::vector<std::vector<long long>> A) {
    ll ans = INF;
    for (ll x = 0; x < 2; x++) {
        vvll dp(H, vll(W));
        for (ll i = 0; i < H; i++) {
            for (ll j = 0; j < W; j++) {
                dp[i][j] = A[i][j];
                if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + C);
                if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + C);
            }
        }

        for (ll i = 0; i < H; i++) {
            for (ll j = 0; j < W; j++) {
                ll res = INF;
                if (i > 0) res = min(res, dp[i - 1][j] + C + A[i][j]);
                if (j > 0) res = min(res, dp[i][j - 1] + C + A[i][j]);
                ans = min(ans, res);
            }
        }

        for (ll i = 0; i < H; i++) {
            reverse(A[i].begin(), A[i].end());
        }
    }
    cout << ans << endl;
}

int main() {
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    long long C;
    std::scanf("%lld", &C);
    std::vector<std::vector<long long>> A(H, std::vector<long long>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(H, W, C, std::move(A));
    return 0;
}
