#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<std::vector<long long>> A, long long M, std::vector<long long> X, std::vector<long long> Y){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            std::scanf("%lld", &A[i][j]);
        }
    }
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> X(M);
    std::vector<long long> Y(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    solve(N, std::move(A), M, std::move(X), std::move(Y));
    return 0;
}
