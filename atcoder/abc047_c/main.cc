#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    string s;
    cin >> s;

    char c = s[0];
    ll ans = 0;

    for(ll i = 1; i < s.size() ; i++){
        if(s[i] != c){
            ans++;
            c = s[i];
        }
    }
    cout << ans << endl;


}
