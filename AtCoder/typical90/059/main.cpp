#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, long long Q, std::vector<long long> X, std::vector<long long> Y, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> X(M);
    std::vector<long long> Y(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    std::vector<long long> A(Q);
    std::vector<long long> B(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    solve(N, M, Q, std::move(X), std::move(Y), std::move(A), std::move(B));
    return 0;
}
