#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long W, long long C, std::vector<long long> w, std::vector<long long> v, std::vector<long long> c){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long W;
    scanf("%lld",&W);
    long long C;
    scanf("%lld",&C);
    std::vector<long long> w(N);
    std::vector<long long> v(N);
    std::vector<long long> c(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&w[i]);
        scanf("%lld",&v[i]);
        scanf("%lld",&c[i]);
    }
    solve(N, W, C, std::move(w), std::move(v), std::move(c));
    return 0;
}
