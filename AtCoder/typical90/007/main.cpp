#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> A, long long Q,
           std::vector<long long> B) {
    sort(A.begin(), A.end());
    for (ll i = 0; i < Q; i++) {
        auto ite = lower_bound(A.begin(), A.end(), B[i]);
        ll ans = 0;
        if (ite == A.end())
            ans = B[i] - A[N - 1];
        else if (ite == A.begin())
            ans = A[0] - B[i];
        else {
            ll x = *ite;
            ll y = *(--ite);
            ans = min(x - B[i], B[i] - y);
        }
        printf("%lld\n", ans);
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> B(Q);
    for (int i = 0; i < Q; i++) {
        std::scanf("%lld", &B[i]);
    }
    solve(N, std::move(A), Q, std::move(B));
    return 0;
}
