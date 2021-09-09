#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long K, std::vector<long long> A,
           std::vector<long long> B) {
    vll p;
    for (ll i = 0; i < N; i++) {
        p.push_back(B[i]);
        p.push_back(A[i] - B[i]);
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    ll ans = 0;
    for (ll i = 0; i < K; i++) {
        ans += p[i];
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    solve(N, K, std::move(A), std::move(B));
    return 0;
}
