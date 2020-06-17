#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n,ans = 0;
    cin >> n;
    std::vector<ll> v(n),c(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (ll i = 0; i < n; i++) {
        if(v[i]-c[i] > 0)
        ans += v[i]-c[i];
    }
    cout << ans << endl;
    
}
