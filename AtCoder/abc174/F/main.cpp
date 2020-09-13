#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long Q, std::vector<long long> c, std::vector<long long> l, std::vector<long long> r){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> c(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&c[i]);
    }
    std::vector<long long> l(Q);
    std::vector<long long> r(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&l[i]);
        scanf("%lld",&r[i]);
    }
    solve(N, Q, std::move(c), std::move(l), std::move(r));
    return 0;
}
