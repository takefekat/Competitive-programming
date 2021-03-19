#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main(){
    ll n,q; 

    cin >> n;
    vll s(n);
    for (ll i = 0; i < n; i++) cin >> s[i];
    
    cin >> q;
    vll t(q);
    for (ll i = 0; i < q; i++) cin >> t[i];

    sort(s.begin(),s.end());
    ll ans = 0;

    
    for(auto &&e : t) {

        // Binary Search
        // [0,n)を探索
        ll l=0,r=n;
        while(r-l>1){
            ll m = l + (r - l) / 2;
            if(s[m] > e) r = m;
            else l = m;
        }
        // rが答え
        //cout << e << " : " << l << " " << s[l] << endl;
        if(s[l] == e) ans++;
    }
    cout << ans << endl;
    
}