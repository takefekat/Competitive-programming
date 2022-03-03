#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long Q, std::vector<long long> X, std::vector<long long> A, std::vector<long long> B, std::vector<long long> V, std::vector<long long> K){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> X(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &X[i]);
    }
    std::vector<long long> A(N-1);
    std::vector<long long> B(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    std::vector<long long> V(Q);
    std::vector<long long> K(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &V[i]);
        std::scanf("%lld", &K[i]);
    }
    solve(N, Q, std::move(X), std::move(A), std::move(B), std::move(V), std::move(K));
    return 0;
}
