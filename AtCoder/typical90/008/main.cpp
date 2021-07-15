#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const long long MOD = 1000000007;

void solve(long long N, std::string S) {
    string atcoder = "atcoder";
    vvll dp(100010, vll(8, 0));
    dp[0][0] = 1;
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < 8; j++) {
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][j] %= MOD;
            if (j < 7 and S[i] == atcoder[j]) {
                dp[i + 1][j + 1] += dp[i][j];
                dp[i + 1][j + 1] %= MOD;
            }
        }
    }
    cout << dp[N][7] << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
