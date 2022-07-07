#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, long long K, long long L, std::vector<long long> A, std::vector<long long> B, std::vector<long long> U, std::vector<long long> V, std::vector<long long> C){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long K;
    std::scanf("%lld", &K);
    long long L;
    std::scanf("%lld", &L);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> B(L);
    for(int i = 0 ; i < L ; i++){
        std::scanf("%lld", &B[i]);
    }
    std::vector<long long> U(M);
    std::vector<long long> V(M);
    std::vector<long long> C(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &U[i]);
        std::scanf("%lld", &V[i]);
        std::scanf("%lld", &C[i]);
    }
    solve(N, M, K, L, std::move(A), std::move(B), std::move(U), std::move(V), std::move(C));
    return 0;
}
