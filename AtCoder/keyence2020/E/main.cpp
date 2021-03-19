#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long M, std::vector<long long> D, std::vector<long long> U, std::vector<long long> V){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> D(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&D[i]);
    }
    std::vector<long long> U(M);
    std::vector<long long> V(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&U[i]);
        scanf("%lld",&V[i]);
    }
    solve(N, M, std::move(D), std::move(U), std::move(V));
    return 0;
}
