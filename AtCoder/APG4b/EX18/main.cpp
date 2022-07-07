#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, long long M, std::vector<long long> A,
           std::vector<long long> B) {
    vector<vector<string>> m(N, vector<string>(N, "-"));
    for(ll i = 0; i < M; i++) {
        m[A[i]][B[i]] = "o";
        m[B[i]][A[i]] = "x";
    }

    for(ll i = 0; i < N; i++) {
        for(ll j = 0; j < N; j++) {
            cout << m[i][j];
            cout << (j == N - 1 ? "\n" : " ");
        }
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for(int i = 0; i < M; i++) {
        std::scanf("%lld", &A[i]);
        A[i]--;
        std::scanf("%lld", &B[i]);
        B[i]--;
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
