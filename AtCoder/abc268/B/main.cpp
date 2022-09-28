#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


int main(){
    string S, T;
    cin >> S >> T;

    if(S.size() > T.size()) {
        cout << "No" << endl;
        return 0;
    }

    for (ll i = 0; i < S.size(); i++) {
        if(S[i] != T[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
