#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long R, long long C, long long K, std::vector<long long> r, std::vector<long long> c, std::vector<long long> v){

}

signed main(){
    long long R;
    scanf("%lld",&R);
    long long C;
    scanf("%lld",&C);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> r(K);
    std::vector<long long> c(K);
    std::vector<long long> v(K);
    for(int i = 0 ; i < K ; i++){
        scanf("%lld",&r[i]);
        scanf("%lld",&c[i]);
        scanf("%lld",&v[i]);
    }
    solve(R, C, K, std::move(r), std::move(c), std::move(v));
    return 0;
}
