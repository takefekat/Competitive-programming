#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    vector<ll> a(N), b(N), c(N);
    for (ll i = 0; i < N; i++) cin >> a[i] >> b[i] >> c[i];

    // dp[0][i]: 前日にAを選んでi日目までの最大幸福度
    // dp[1][i]: 前日にBを選んでi日目までの最大幸福度
    // dp[2][i]: 前日にCを選んでi日目までの最大幸福度

    vector<vector<ll>> dp(3, vector<ll>(N + 1, 0));

    for (ll i = 0; i < N; i++) {
        dp[0][i + 1] = max(dp[1][i], dp[2][i]) + a[i];
        dp[1][i + 1] = max(dp[0][i], dp[2][i]) + b[i];
        dp[2][i + 1] = max(dp[0][i], dp[1][i]) + c[i];
    }
    cout << max(max(dp[0][N], dp[1][N]), dp[2][N]) << endl;
}