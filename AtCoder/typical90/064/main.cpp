#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long Q, std::vector<long long> A, std::vector<long long> L, std::vector<long long> R, std::vector<long long> V){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    std::vector<long long> V(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &L[i]);
        std::scanf("%lld", &R[i]);
        std::scanf("%lld", &V[i]);
    }
    solve(N, Q, std::move(A), std::move(L), std::move(R), std::move(V));
    return 0;
}
