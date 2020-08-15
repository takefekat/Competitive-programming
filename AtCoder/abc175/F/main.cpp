#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<std::string> S, std::vector<long long> C){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> S(N);
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
        scanf("%lld",&C[i]);
    }
    solve(N, std::move(S), std::move(C));
    return 0;
}
