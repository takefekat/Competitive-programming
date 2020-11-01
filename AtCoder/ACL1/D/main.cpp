#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long K, std::vector<long long> X, long long Q, std::vector<long long> L, std::vector<long long> R){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> X(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&X[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&L[i]);
        scanf("%lld",&R[i]);
    }
    solve(N, K, std::move(X), Q, std::move(L), std::move(R));
    return 0;
}
