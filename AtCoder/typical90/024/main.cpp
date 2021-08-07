#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long K, std::vector<long long> A,
           std::vector<long long> B) {
    ll res = 0;
    for (ll i = 0; i < N; i++) {
        res += abs(A[i] - B[i]);
    }
    string ans = NO;
    if (res <= K and (res - K) % 2 == 0) ans = YES;
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &B[i]);
    }
    solve(N, K, std::move(A), std::move(B));
    return 0;
}
