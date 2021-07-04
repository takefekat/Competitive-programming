#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> S, std::vector<long long> T){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> S(N);
    std::vector<long long> T(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &S[i]);
        std::scanf("%lld", &T[i]);
    }
    solve(N, std::move(S), std::move(T));
    return 0;
}
