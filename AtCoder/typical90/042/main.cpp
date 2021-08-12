#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

using mint = modint1000000007;
// 0: 1 {}
// 1: 1 {1}
// 2: 2 {11,2}
// 3: 4 {111,12,21,3}
// 4: 8 {1111,112,121,211,13,31,22,4}
// 5:16 {11111,1112,1121,1211,2111,122,212,221,113,131,311,23,32,14,41,5}

void solve(long long K) {
        if (K % 9 != 0) {
        cout << 0 << endl;
        return;
    }
    vector<mint> dp(K + 1, 0);
    dp[0] = 1;
    for (ll i = 0; i < K + 1; i++) {
        for (ll j = 1; j <= 9; j++) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
            }
        }
    }
    cout << dp[K].val() << endl;
}

int main() {
    long long K;
    std::scanf("%lld", &K);
    solve(K);
    return 0;
}
