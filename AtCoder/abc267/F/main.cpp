#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> A, std::vector<long long> B, long long Q, std::vector<long long> U, std::vector<long long> K){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N-1);
    std::vector<long long> B(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> U(Q);
    std::vector<long long> K(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &U[i]);
        std::scanf("%lld", &K[i]);
    }
    solve(N, std::move(A), std::move(B), Q, std::move(U), std::move(K));
    return 0;
}
