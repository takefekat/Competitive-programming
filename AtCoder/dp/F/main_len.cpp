#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

template <class T>
void chmax(T& a, T b) {
    if (a < b) a = b;
}

int main() {
    string s, t;
    cin >> s >> t;
    ll S = s.size(), T = t.size();

    vvll dp(S + 1, vll(T + 1, -1));
    dp[0][0] = 0;

    for (ll i = 0; i < S + 1; i++) {
        for (ll j = 0; j < T + 1; j++) {
            // 縦
            if (i < S) {
                chmax(dp[i + 1][j], dp[i][j]);
            }
            // 右
            if (j < T) {
                chmax(dp[i][j + 1], dp[i][j]);
            }
            // 右下
            if (i < S and j < T) {
                if (s[i] == t[j]) {
                    chmax(dp[i + 1][j + 1], dp[i][j] + 1);
                } else {
                    chmax(dp[i + 1][j + 1], dp[i][j]);
                }
            }
        }
    }
    cout << dp[S][T] << endl;
}