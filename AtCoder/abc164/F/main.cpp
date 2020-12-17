#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> S, std::vector<long long> T, std::vector<long long> U, std::vector<long long> V){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&S[i]);
    }
    std::vector<long long> T(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&T[i]);
    }
    std::vector<long long> U(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&U[i]);
    }
    std::vector<long long> V(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&V[i]);
    }
    solve(N, std::move(S), std::move(T), std::move(U), std::move(V));
    return 0;
}
