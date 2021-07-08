#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> W, std::vector<long long> B){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> W(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &W[i]);
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &B[i]);
    }
    solve(N, std::move(W), std::move(B));
    return 0;
}
