#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll INF = 1LL << 60;
void solve(long long N, long long M, long long R, std::vector<long long> r,
           std::vector<long long> a, std::vector<long long> b,
           std::vector<long long> c) {
    ll dp[210][210] = {};
    for (ll i = 0; i < N; i++)
        for (ll j = 0; j < N; j++)
            if (i != j) dp[i][j] = INF;

    for (ll i = 0; i < M; i++) {
        dp[a[i] - 1][b[i] - 1] = c[i];
        dp[b[i] - 1][a[i] - 1] = c[i];
    }

    for (ll k = 0; k < N; k++) {
        for (ll i = 0; i < N; i++) {
            for (ll j = 0; j < N; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    sort(r.begin(), r.end());
    ll ans = INF;
    do {
        ll sp = 0;
        for (ll i = 0; i < R - 1; i++) {
            sp += dp[r[i]][r[i + 1]];
        }
        ans = min(ans, sp);
    } while (next_permutation(r.begin(), r.end()));
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long R;
    std::scanf("%lld", &R);
    std::vector<long long> r(R);
    for (int i = 0; i < R; i++) {
        std::scanf("%lld", &r[i]);
        r[i]--;
    }
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    std::vector<long long> C(M);
    for (int i = 0; i < M; i++) {
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
        std::scanf("%lld", &C[i]);
    }
    solve(N, M, R, std::move(r), std::move(A), std::move(B), std::move(C));
    return 0;
}
