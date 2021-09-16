#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> A, std::vector<long long> B,
           std::vector<long long> C) {
    vll a(46, 0), b(46, 0), c(46, 0);
    for (ll i = 0; i < N; i++) {
        a[A[i] % 46]++;
        b[B[i] % 46]++;
        c[C[i] % 46]++;
    }
    ll ans = 0;
    for (ll i = 0; i < 46; i++) {
        for (ll j = 0; j < 46; j++) {
            ll k = (46 - (i + j) % 46) % 46;
            ans += a[i] * b[j] * c[k];
        }
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &B[i]);
    }
    std::vector<long long> C(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &C[i]);
    }
    solve(N, std::move(A), std::move(B), std::move(C));
    return 0;
}
