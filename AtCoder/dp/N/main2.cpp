#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

void solve(long long N, std::vector<long long> a) {
    vecll sum(N, 0);
    for (ll i = 0; i < N; i++) {
        sum[i] = a[i];
        if (i != 0) sum[i] += sum[i - 1];
    }

    vector<vecll> dp(N, vecll(N, 1e+18));
    for (ll i = 0; i < N; i++) {
        dp[i][i] = 0;
    }
    for (ll i = 0; i < N; i++) {
        for (ll j = 1; i + j < N; j++) {
            for (ll k = i; k + 1 <= i + j; k++) {
                dp[i][i + j] =
                    min(dp[i][i + j], dp[i][k] + dp[k + 1][i + j] + sum[k] -
                                          (i == 0 ? 0 : sum[i - 1]) +
                                          sum[i + j] - sum[k]);
            }
        }
    }
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < N; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << dp[0][N - 1] << endl;
}

signed main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
