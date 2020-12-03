#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long M, std::vector<long long> u, std::vector<long long> v, std::vector<long long> c){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> u(M);
    std::vector<long long> v(M);
    std::vector<long long> c(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
        scanf("%lld",&c[i]);
    }
    solve(N, M, std::move(u), std::move(v), std::move(c));
    return 0;
}
