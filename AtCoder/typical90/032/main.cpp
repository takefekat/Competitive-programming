#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<std::vector<long long>> A, long long M,
           std::vector<long long> X, std::vector<long long> Y) {
    vvll dp(N, vll(1LL << N, 1LL << 60));
    for (ll i = 0; i < N; i++) {
        dp[i][0] = 0;
    }

    vvll ng(N, vll(N, 0));
    for (ll i = 0; i < M; i++) {
        ng[X[i] - 1][Y[i] - 1] = 1;
        ng[Y[i] - 1][X[i] - 1] = 1;
    }

    for (ll i = 0; i < 1LL << N; i++)  // O(1000)
    {
        ll cnt = 0;
        for (ll j = 0; j < N; j++) {
            if ((i & (1 << j)) != 0) cnt++;
        }

        for (ll j = 0; j < N; j++)  // O(10)
        {
            for (ll k = 0; k < N; k++)  // O(10)
            {
                if ((i & (1 << k)) != 0) continue;
                if (((i & (1 << j)) != 0) && (ng[j][k] == 1)) continue;
                dp[k][i | (1 << k)] =
                    min(dp[k][i | (1 << k)], dp[j][i] + A[k][cnt]);
            }
        }
    }
    ll ans = 1LL << 60;
    for (ll i = 0; i < N; i++) {
        ans = min(ans, dp[i][(1 << N) - 1]);
    }
    cout << (ans == 1LL << 60 ? -1 : ans) << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::scanf("%lld", &A[i][j]);
        }
    }
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> X(M);
    std::vector<long long> Y(M);
    for (int i = 0; i < M; i++) {
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    solve(N, std::move(A), M, std::move(X), std::move(Y));
    return 0;
}
