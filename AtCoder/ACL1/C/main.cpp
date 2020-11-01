#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long M, std::vector<std::string> S){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, M, std::move(S));
    return 0;
}
