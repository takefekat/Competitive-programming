#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()



int main(){
   
    vector<string> S(9);
    for (ll i = 0; i < 9; i++) { cin >> S[i]; }

    ll ans = 0;
    for (ll i = 0; i < 9; i++) {
        for (ll j = 0; j < 9; j++) {
            if (S[i][j] != '#') continue;
            for (ll k = j + 1; k < 9; k++) {
                if (S[i][k] != '#') continue;
                ll len = k - j;
                if (i + len >= 9) continue;
                if ( S[i + len][j] == '#' and S[i + len][k] == '#') ans ++;
            }
        }        
    }
    cout << ans << endl;
    
    

    return 0;
}
