#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long Q, std::vector<long long> x, std::vector<long long> y, std::vector<long long> q){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    std::vector<long long> q(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &q[i]);
    }
    solve(N, Q, std::move(x), std::move(y), std::move(q));
    return 0;
}
