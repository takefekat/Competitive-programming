#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> A, std::vector<long long> B,
           std::vector<long long> C) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    ll ans = 0;
    for (auto &&b : B) {
        auto itea = upper_bound(A.begin(), A.end(), -b);
        auto itec = upper_bound(C.begin(), C.end(), b);

        ans += (C.end() - itec) * (A.end() - itea);
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
        A[i] *= -1;
    }
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &B[i]);
    }
    std::vector<long long> C(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &C[i]);
        }
    solve(N, std::move(A), std::move(B), std::move(C));
    return 0;
}
