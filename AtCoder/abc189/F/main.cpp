#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long M, long long K, std::vector<long long> A){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> A(K);
    for(int i = 0 ; i < K ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, M, K, std::move(A));
    return 0;
}
