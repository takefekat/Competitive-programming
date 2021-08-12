#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

using mint = modint;

void solve(long long N, long long P, long long Q, std::vector<long long> A) {
    ll ans = 0;

    mint::set_mod(P);
    for (ll i = 0; i < N; i++) {
        for (ll j = i + 1; j < N; j++) {
            for (ll k = j + 1; k < N; k++) {
                for (ll l = k + 1; l < N; l++) {
                    for (ll m = l + 1; m < N; m++) {
                        mint res = (mint)A[i] * A[j] * A[k] * A[l] * A[m];
                        if (res == Q) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long P;
    std::scanf("%lld", &P);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    solve(N, P, Q, std::move(A));
    return 0;
}
