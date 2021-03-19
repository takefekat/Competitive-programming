#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;


// https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_4_B

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
        // F F F F T T T Tのような解空間のうち、 (e < s[x]) == T を満たす最小のxを探索
        // s[x] == e ならば ans++

        // Binary Search
        // [0,n)を探索
        ll l=0,r=n;
        while(r-l>1){
            ll m = l + (r - l) / 2;
            if(e < s[m]) r = m; // [l,m)を探索
            else l = m;         // [m,r)を探索
        }
        // r-l==1になっている
        // e < s[x] を満たす最小のxを探索：r
        cout << e << " : " << l << " " <<  r << " " << s[l] << endl;
        if(s[l] == e) ans++;
    }
    cout << ans << endl;
    
}