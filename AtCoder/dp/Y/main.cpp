#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const long long MOD = 1000000007;

void solve(long long H, long long W, long long N, std::vector<long long> r, std::vector<long long> c){

}

signed main(){
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> r(N);
    std::vector<long long> c(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&r[i]);
        scanf("%lld",&c[i]);
    }
    solve(H, W, N, std::move(r), std::move(c));
    return 0;
}
