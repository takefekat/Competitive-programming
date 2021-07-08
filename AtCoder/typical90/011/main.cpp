#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> D, std::vector<long long> C, std::vector<long long> S){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> D(N);
    std::vector<long long> C(N);
    std::vector<long long> S(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &D[i]);
        std::scanf("%lld", &C[i]);
        std::scanf("%lld", &S[i]);
    }
    solve(N, std::move(D), std::move(C), std::move(S));
    return 0;
}
