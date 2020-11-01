#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const long long MOD = 1000000007;

void solve(long long N, std::vector<long long> x, std::vector<long long> y){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> x(N-1);
    std::vector<long long> y(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
    }
    solve(N, std::move(x), std::move(y));
    return 0;
}
