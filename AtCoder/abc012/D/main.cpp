#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll INF = 1LL << 60;
void solve(long long N, long long M, std::vector<long long> a,
           std::vector<long long> b, std::vector<long long> t) {
    ll dp[330][330] = {0};
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < N; j++) {
            if (i != j) dp[i][j] = INF;
        }
    }
    for (ll i = 0; i < M; i++) {
        dp[a[i] - 1][b[i] - 1] = t[i];
        dp[b[i] - 1][a[i] - 1] = t[i];
    }

    for (ll k = 0; k < N; k++) {
        for (ll i = 0; i < N; i++) {
            for (ll j = 0; j < N; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    ll ans = INF;
    for (ll i = 0; i < N; i++) {
        ll sp = 0;
        for (ll j = 0; j < N; j++) {
            sp = max(sp, dp[i][j]);
        }
        ans = min(ans, sp);
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    std::vector<long long> t(M);
    for (int i = 0; i < M; i++) {
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
        std::scanf("%lld", &t[i]);
    }
    solve(N, M, std::move(a), std::move(b), std::move(t));
    return 0;
}
