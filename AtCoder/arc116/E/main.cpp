#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long K, std::vector<long long> u, std::vector<long long> v){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> u(N-1);
    std::vector<long long> v(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, K, std::move(u), std::move(v));
    return 0;
}
