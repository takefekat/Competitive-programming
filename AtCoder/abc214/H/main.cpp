#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define all(x) (x).begin(),(x).end() 



void solve(long long N, long long M, long long K, std::vector<long long> A, std::vector<long long> B, std::vector<long long> X){

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
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    std::vector<long long> X(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &X[i]);
    }
    solve(N, M, K, std::move(A), std::move(B), std::move(X));
    return 0;
}
