#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> A, std::vector<long long> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        ans += abs(A[i] - B[i]);
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
    solve(N, std::move(A), std::move(B));
    return 0;
}
