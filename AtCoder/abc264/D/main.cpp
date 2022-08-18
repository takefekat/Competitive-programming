#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(std::string S){
    string atcoder = "atcoder";
    ll ans = 0;
    for(ll i=0; i<S.size(); i++){
        if( S[i] == atcoder[i] ) continue;

        for(ll j=i+1; j<S.size(); j++){
            if( S[j] == atcoder[i] ){
                ans += j-i;
                S = atcoder.substr(0,i+1) + S.substr(i,j-i) + S.substr(j+1,10);
                break;
            }
        }
        //cout << S << endl;
    }
    cout << ans << endl;
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
