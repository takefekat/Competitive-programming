#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string S;
    cin >> S;

    ll ans = -1;
    for (ll i = 0; i < S.size(); i++) {
        if (S[i] == 'a') ans = i+1;
    }
    cout << ans << endl;

    return 0;
}
