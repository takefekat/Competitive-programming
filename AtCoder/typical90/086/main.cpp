#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 1000000007;

void solve(long long N, long long Q, std::vector<long long> x, std::vector<long long> y, std::vector<long long> z, std::vector<long long> w){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> x(Q);
    std::vector<long long> y(Q);
    std::vector<long long> z(Q);
    std::vector<long long> w(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
        std::scanf("%lld", &z[i]);
        std::scanf("%lld", &w[i]);
    }
    solve(N, Q, std::move(x), std::move(y), std::move(z), std::move(w));
    return 0;
}
