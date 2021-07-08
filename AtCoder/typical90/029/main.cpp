#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long W, long long N, std::vector<long long> L, std::vector<long long> R){

}

int main(){
    long long W;
    std::scanf("%lld", &W);
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> L(N);
    std::vector<long long> R(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &L[i]);
        std::scanf("%lld", &R[i]);
    }
    solve(W, N, std::move(L), std::move(R));
    return 0;
}
