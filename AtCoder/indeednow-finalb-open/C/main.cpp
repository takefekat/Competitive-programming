#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::string S, std::vector<long long> C){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::string S;
    std::cin >> S;
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &C[i]);
    }
    solve(N, S, std::move(C));
    return 0;
}
