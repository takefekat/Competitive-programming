#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <class T>
void chmin(T& a, T b) {
    if (a > b) a = b;
}

int main() {
    ll N, W;
    cin >> N >> W;
    vector<ll> w(N), v(N);

    for (ll i = 0; i < N; i++) cin >> w[i] >> v[i];

    // dp[i][v]: i番目までの品で、価値の和がvになる、最小の重さの和
    vector<vector<ll>> dp(N + 1, vector<ll>(100001, 1e+10));
    dp[0][0] = 0;
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < 100001; j++) {
            chmin(dp[i + 1][j], dp[i][j]);
            if (j + v[i] <= 100000) chmin(dp[i + 1][j + v[i]], dp[i][j] + w[i]);
        }
    }

    // Wを超えないdp[N][i]のうち、最大のiが答え
    for (ll i = 100000; i >= 0; i--) {
        if (dp[N][i] <= W) {
            cout << i << endl;
            break;
        }
    }
}
