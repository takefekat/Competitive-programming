#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    ll N;
    while (cin >> N && N != 0) {
        vll x(N);
        for (ll i = 0; i < N; i++) cin >> x[i];
        if (N & 1) x.push_back(-10);
        N = x.size();

        vvll dp(N + 1, vll(N + 1, 0));
        for (ll w = 1; w < N; w += 2) {  // 区間 w のdp[i][i+w]を求める
            for (ll i = 0; i + w < N; i++) {
                if (dp[i + 1][i + w - 1] == w - 1)
                    dp[i][i + w] = dp[i + 1][i + w - 1] +
                                   (abs(x[i] - x[i + w]) <= 1 ? 2 : 0);
                for (ll k = i + 1; k < i + w - 1; k += 2) {
                    dp[i][i + w] =
                        max(dp[i][i + w], dp[i][k] + dp[k + 1][i + w]);
                }
                // cout << "dp[" << i << "][" << i + w << "] = " << dp[i][i + w]
                // << endl;
            }
        }
        cout << dp[0][x.size() - 1] << endl;
    }

    return 0;
}
