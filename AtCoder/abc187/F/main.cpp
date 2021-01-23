#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll is_clique(ll bitmap, vll& a, vll& b) {}

void solve(long long N, long long M, vll& A, vll& B) {
    ll ans = 1e+10;
    for (ll i = 0; i < (1 << N); i++) {
        ll a = is_clique(i, A, B);
        ans = min(ans, a);
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for (int i = 0; i < M; i++) {
        scanf("%lld", &A[i]);
        scanf("%lld", &B[i]);
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
