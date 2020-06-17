#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long L, std::vector<std::string> S){

    sort(S.begin(),S.end());
    for(auto elm : S){
        cout << elm;
    }
    cout << endl;

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long L;
    scanf("%lld",&L);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, L, std::move(S));
    return 0;
}
