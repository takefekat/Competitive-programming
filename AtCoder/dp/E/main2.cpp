#include <iostream>
#include <vector>
using namespace std;
#include <string>
typedef long long ll;

template <class T>
void chmin(T& a, T b) {
    if (a > b) a = b;
}

template <class T>
void chmax(T& a, T b) {
    if (a < b) a = b;
}

int main() {
    // 入力
    ll N, W;
    cin >> N >> W;
    vector<ll> weight(N), value(N);
    for (ll i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    // DPテーブル定義
    vector<vector<ll>> dp(N + 1, vector<ll>(W + 1, 0));  // 0で初期化

    cout << dp[N][W] << endl;
}