#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, long long M, std::vector<long long> A,
           std::vector<long long> C) {
    vector<ll> B(N, 0);
    for(ll i = 0; i < N + 1; i++) {
        B[i] =
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(N + 1);
    for(int i = 0; i < N + 1; i++) {
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> C(N + M + 1);
    for(int i = 0; i < N + M + 1; i++) {
        std::scanf("%lld", &C[i]);
    }
    solve(N, M, std::move(A), std::move(C));
    return 0;
}
