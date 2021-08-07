#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 998244353;

void solve(long long N, long long K, std::vector<long long> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> A(K);
    for(int i = 0 ; i < K ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, K, std::move(A));
    return 0;
}
