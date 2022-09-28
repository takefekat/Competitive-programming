#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> U, std::vector<long long> V){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> U(M);
    std::vector<long long> V(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &U[i]);
        std::scanf("%lld", &V[i]);
    }
    solve(N, M, std::move(A), std::move(U), std::move(V));
    return 0;
}
