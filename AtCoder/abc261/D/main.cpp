#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    ll N, M;
    cin >> N >> M;

    vector<ll> X(N);
    for(ll i = 0; i < N; i++) cin >> X[i];

    map<ll, ll> cnt_bonus;
    for(ll i = 0; i < M; i++) {
        ll c, y;
        cin >> c >> y;
        cnt_bonus[c] = y;
    }

    vector<vector<ll>> dp(5010, vll(5010, INT16_MIN));
    dp[0][0] = 0;
    for(ll i = 0; i < N; i++) {
        for(ll j = 0; j < N; j++) {
            if(dp[i][j] == INT16_MIN) continue;
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + X[i]);
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][j]);
        }
        for(auto&& m : cnt_bonus) {
            ll c = m.first;
            ll b = m.second;
            if(dp[i][c - 1] == INT16_MIN) continue;
            dp[i + 1][c] = max(dp[i + 1][c], dp[i][c - 1] + X[i] + b);
        }
    }
    ll ans = 0;
    for(ll i = 0; i <= N; i++) {
        ans = max(ans, dp[N][i]);
    }
    cout << ans << endl;
}