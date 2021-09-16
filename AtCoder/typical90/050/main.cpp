#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const long long MOD = 1000000007;

void solve(long long N, long long L) {
    ll dp[N + 1] = {};
    dp[0] = 1;
    for (ll i = 0; i < N; i++) {
        dp[i + 1] = (dp[i + 1] + dp[i]) % MOD;
        if (i + L <= N) {
            dp[i + L] = (dp[i + L] + dp[i]) % MOD;
        }
    }
    cout << dp[N] << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long L;
    std::scanf("%lld", &L);
    solve(N, L);
    return 0;
}
