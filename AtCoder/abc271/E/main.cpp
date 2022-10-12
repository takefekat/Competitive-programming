#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, long long K, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> E){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    std::vector<long long> C(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
        std::scanf("%lld", &C[i]);
    }
    std::vector<long long> E(K);
    for(int i = 0 ; i < K ; i++){
        std::scanf("%lld", &E[i]);
    }
    solve(N, M, K, std::move(A), std::move(B), std::move(C), std::move(E));
    return 0;
}
