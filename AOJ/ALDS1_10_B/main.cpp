#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ll N;
    cin >> N;

    vll r(N), c(N);
    for (ll i = 0; i < N; i++) cin >> r[i] >> c[i];

    for (ll w = 1; w < N; w++) {  // w:区間の大きさ（行列積の回数）
        for (ll l = 0; l < N; l++) {  // l:区間の開始位置
            // dp[i][w]:i番目〜i+w番目までの連鎖行列積問題を解く
                }
    }
}