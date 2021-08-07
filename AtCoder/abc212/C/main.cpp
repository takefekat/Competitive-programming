#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long M, std::vector<long long> A,
           std::vector<long long> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll ans = 1LL << 60;
    for (ll i = 0; i < N; i++) {
        auto ite = lower_bound(B.begin(), B.end(), A[i]);
        ans = min(ans, abs(A[i] - *ite));
        if (ite != B.begin()) {
            ite--;
            ans = min(ans, abs(A[i] - *ite));
            ite++;
        }
        ite++;
        if (ite != B.end()) {
            ans = min(ans, abs(A[i] - *ite));
        }
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> B(M);
    for (int i = 0; i < M; i++) {
        std::scanf("%lld", &B[i]);
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
