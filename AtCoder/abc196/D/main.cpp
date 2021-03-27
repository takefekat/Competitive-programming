#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long H, long long W, long long A, long long B) {
    if (H < W) swap(H, W);

    vector<vvll> dp(H, vvll(W, vll(1LL << min(H, W), 0)));
    // dp[H][W][state] : 通り
    dp[0][0][0] = 1;
    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            for(ll s=0; s<1LL<<min(H,W; s++) {
                if ((s & (1 << j)) != 0) continue;
                // 1x1を置く
                dp[i][j][s | (1 << j)] += dp[i][j][s];

                // 1x2を置く
                if (j > 0 and ((s & (1 << j - 1)) == 0)) {
                    ll nxt = s | (1 << j) | (1 << j + 1);
                    dp[i][j][nxt] += dp[i][j][s];
                }

                // 2x1を置く
                if (i > 0 and ((s & (1 << j - 1)) == 0)) {
                    ll nxt = s | (1 << j) | (1 << j + 1);
                    dp[i][j][nxt] += dp[i][j][s];
                }
            }
        }
    }

    int main() {
        long long H;
        scanf("%lld", &H);
        long long W;
        scanf("%lld", &W);
        long long A;
        scanf("%lld", &A);
        long long B;
        scanf("%lld", &B);
        solve(H, W, A, B);
        return 0;
    }
