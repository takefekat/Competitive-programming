#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


bool is_ans(vector<string>& S, ll a, ll b, ll c, ll d) {
    bool res = true;

    for (ll i = 1; i <= 10; i++) {
        for (ll j = 1; j <= 10; j++) {
            if ( a <= i && i <= b && c <= j && j <= d ) {
                if ( S[i-1][j-1] != '#' ) res = false;
            }
            else{
                if ( S[i-1][j-1] != '.' ) res = false;
            }
        }
        
    }
    return res;

}

int main(){
    vector<string> S(10);
    for(int i = 0 ; i < 10 ; i++) cin >> S[i];

    for (ll a = 1; a <= 10; a++) {
        for (ll b = a; b <= 10; b++) {
            for (ll c = 1; c <= 10; c++) {
                for (ll d = c; d <= 10; d++) {
                    if(is_ans(S, a, b, c, d)){
                        cout << a << " " << b << endl;
                        cout << c << " " << d << endl;
                        return 0;
                    }
                }
            }
        }
    }
    


    return 0;
}
