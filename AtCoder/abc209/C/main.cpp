#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const long long MOD = 1000000007;

void solve(long long N, std::vector<long long> A) {
    sort(A.begin(), A.end());

    ll ans = A[0];
    for (ll i = 1; i < N; i++) {
        ans *= (A[i] - i);
        ans %= MOD;
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> C(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &C[i]);
    }
    solve(N, std::move(C));
    return 0;
}
