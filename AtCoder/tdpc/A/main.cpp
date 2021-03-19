#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ll N;
    cin >> N;
    vector<ll> p(N);
    for (ll i = 0; i < N; i++) cin >> p[i];

    vector<ll> dp(10001, 0);
    dp[0] = 1;
    for (ll i = 0; i < N; i++) {
        for (ll j = 10000; j >= 0; j--) {
            if (dp[j]) dp[j + p[i]] = 1;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < 10001; i++) {
        ans += dp[i];
    }
    cout << ans << endl;
}