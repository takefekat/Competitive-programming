#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

// aをdで何回割れるか
ll count(ll a, ll d) {
    ll res = 0;
    while (a % d == 0) {
        res++;
        a /= d;
    }
    return res;
}

int main(){
    ll N; cin >> N;
    vector<ll> a(N), a2(N), a3(N);
    ll min2 = 100000, min3 = 100000;
    for (ll i = 0; i < N; i++) { 
        cin >> a[i]; 
        a2[i] = count(a[i], 2);
        a3[i] = count(a[i], 3);
        min2 = min(min2, a2[i]);
        min3 = min(min3, a3[i]);
    }

    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < a2[i] - min2; j++) {
            a[i] /= 2;
            ans ++;
        }
        for (ll j = 0; j < a3[i] - min3; j++) {
            a[i] /= 3;
            ans ++;
        }       
    }

    for (ll i = 0; i < N-1; i++) {
        if (a[i] != a[i+1]) ans = -1;
    }
    cout << ans << endl;
    
    
    
    return 0;
}
