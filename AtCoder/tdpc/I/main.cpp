#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(std::string s) {
    while (s.size() % 3 != 0) s += "x";
    ll N = s.size();

    // dp[i][j]: i番目から
    vvll dp(N, vll(N, 0));
    for (ll w = 2; w < N; w += 3) {
        for (ll i = 0; i + w < N; i++) {
            if (dp[i + 1][i + w - 2] * 3 == w - 2) {
                if (s[i] == 'i' && s[i + w - 1] == 'w' && s[i + w] == 'i')
                    dp[i][i + w] = max(dp[i][i + w], dp[i + 1][i + w - 2] + 1);
                else
                    dp[i][i + w] = max(dp[i][i + w], dp[i + 1][i + w - 2]);
            }
            if (dp[i + 2][i + w - 1] * 3 == w - 2) {
                if (s[i] == 'i' && s[i + 1] == 'w' && s[i + w] == 'i')
                    dp[i][i + w] = max(dp[i][i + w], dp[i + 2][i + w - 1] + 1);
                else
                    dp[i][i + w] = max(dp[i][i + w], dp[i + 1][i + w - 1]);
            }
            for (ll k = i + 2; k < i + w; k += 3) {
                dp[i][i + w] = max(dp[i][i + w], dp[i][k] + dp[k + 1][i + w]);
            }
        }
    }
    cout << dp[0][N - 1] << endl;
}

int main() {
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
