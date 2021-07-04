#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long M, std::vector<long long> KA, std::vector<long long> A){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> KA(1);
    for(int i = 0 ; i < 1 ; i++){
        scanf("%lld",&KA[i]);
    }
    std::vector<long long> A(N-2+1);
    for(int i = 0 ; i < N-2+1 ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, M, std::move(KA), std::move(A));
    return 0;
}
