#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, std::vector<long long> X, std::vector<long long> Y, std::vector<long long> A, std::vector<long long> B, std::vector<long long> Z){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> X(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &X[i]);
    }
    std::vector<long long> Y(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &Y[i]);
    }
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    std::vector<long long> Z(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
        std::scanf("%lld", &Z[i]);
    }
    solve(N, M, std::move(X), std::move(Y), std::move(A), std::move(B), std::move(Z));
    return 0;
}
