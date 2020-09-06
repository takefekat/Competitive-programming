#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> x, std::vector<long long> y, std::vector<long long> t, std::vector<long long> r){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> x(N-1-0+1);
    std::vector<long long> y(N-1-0+1);
    std::vector<long long> t(N-1-0+1);
    std::vector<long long> r(N-1-0+1);
    for(int i = 0 ; i < N-1-0+1 ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
        scanf("%lld",&t[i]);
        scanf("%lld",&r[i]);
    }
    solve(N, std::move(x), std::move(y), std::move(t), std::move(r));
    return 0;
}
