#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<std::string> S, std::vector<long long> P){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> S(N);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
        scanf("%lld",&P[i]);
    }
    solve(N, std::move(S), std::move(P));
    return 0;
}
