#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<std::string> S){
    
    vll y(N+1,0); // y_i=trueとなる組合せの数
    y[0] = 1;
    for(ll i=1; i<=N; i++) {
        if(S[i-1]=="AND")
            y[i] = y[i-1];
        else
            y[i] = (1LL<<i) + y[i-1];
    }
    cout << y[N] << endl;


}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, std::move(S));
    return 0;
}
