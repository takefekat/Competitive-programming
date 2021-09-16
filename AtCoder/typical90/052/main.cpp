#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const long long MOD = 1000000007;

void solve(long long N, std::vector<std::vector<long long>> A) {
    ll res = 1;
    for (ll i = 0; i < N; i++) {
        ll res_t = 0;
        for (ll j = 0; j < 6; j++) {
            res_t += (A[i][j] * res) % MOD;
            res_t %= MOD;
        }
        res = res_t;
        // cout << res << endl;
    }
    cout << res << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(6));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 6; j++) {
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(N, std::move(A));
    return 0;
}
