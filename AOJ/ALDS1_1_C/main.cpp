#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll n; cin >> n;
    ll ans = 0;
    for(ll i=0; i<n; i++) {
        ll x; cin >> x;
        
        bool f = true;
        
        for(ll i=2; i*i<=x; i++) {
            if(x==2) break;
            if(x%i == 0) {f = false; break;}
        }
        if(f) ans ++;
    }
    cout << ans << endl;
}