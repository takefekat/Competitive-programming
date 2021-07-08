#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 1000000007;

void solve(long long N, long long B, long long K, std::vector<long long> c){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long B;
    std::scanf("%lld", &B);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> c(K);
    for(int i = 0 ; i < K ; i++){
        std::scanf("%lld", &c[i]);
    }
    solve(N, B, K, std::move(c));
    return 0;
}
