#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 1000000007;

void solve(long long N, std::vector<std::string> c, std::vector<long long> a, std::vector<long long> b){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::string> c(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> c[i];
    }
    std::vector<long long> a(N-1);
    std::vector<long long> b(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
    }
    solve(N, std::move(c), std::move(a), std::move(b));
    return 0;
}
