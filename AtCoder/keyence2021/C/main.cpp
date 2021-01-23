#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 998244353;

void solve(long long H, long long W, long long K, std::vector<long long> h, std::vector<long long> w, std::vector<std::string> c){

}

int main(){
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> h(K);
    std::vector<long long> w(K);
    std::vector<std::string> c(K);
    for(int i = 0 ; i < K ; i++){
        scanf("%lld",&h[i]);
        scanf("%lld",&w[i]);
        std::cin >> c[i];
    }
    solve(H, W, K, std::move(h), std::move(w), std::move(c));
    return 0;
}
