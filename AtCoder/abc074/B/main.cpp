#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long K, std::vector<long long> x){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> x(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &x[i]);
    }
    solve(N, K, std::move(x));
    return 0;
}
