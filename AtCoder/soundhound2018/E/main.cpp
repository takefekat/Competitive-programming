#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long Q, std::string S, std::vector<long long> k){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::string S;
    std::cin >> S;
    std::vector<long long> k(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &k[i]);
    }
    solve(N, Q, S, std::move(k));
    return 0;
}
