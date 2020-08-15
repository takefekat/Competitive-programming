#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> u, std::vector<long long> v){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> u(N-1);
    std::vector<long long> v(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, std::move(u), std::move(v));
    return 0;
}
