#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

template <class T>
void chmin(T& a, T b) {
    if (a > b) a = b;
}

int main() {
    ll N, W;
    cin >> N >> W;
    vector<ll> w(N), v(N);

    for (ll i = 0; i < N; i++) cin >> w[i] >> v[i];

    // dp[i][w]: i番目までの品で、重さの和がwになる、価値の最大値
    // dp[i][v]: i番目までの品で、価値の和がvになる、最小の重さの和
    vector<vector<ll>> dp(N + 1, vector<ll>(1000 * 100 + 1, 1e+10));
    dp[0][0] = 0;
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < 100001; j++) {
            // i番目の品を選ばないとき
            chmin(dp[i + 1][j], dp[i][j]);
            // i番目の品を選ぶとき
            if (j + v[i] <= 100000) chmin(dp[i + 1][j + v[i]], dp[i][j] + w[i]);
        }
    }

    // Wを超えないdp[N][i]のうち、最大のiが答え
    for (ll v = 100000; v >= 0; v--) {
        if (dp[N][v] <= W) {
            cout << v << endl;
            break;
        }
    }
}
