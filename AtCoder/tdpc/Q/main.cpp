#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 1000000007;

void solve(long long N, long long L, std::vector<std::string> w){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long L;
    scanf("%lld",&L);
    std::vector<std::string> w(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> w[i];
    }
    solve(N, L, std::move(w));
    return 0;
}
