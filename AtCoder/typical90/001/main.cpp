#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long L, long long K, std::vector<long long> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long L;
    std::scanf("%lld", &L);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, L, K, std::move(A));
    return 0;
}
