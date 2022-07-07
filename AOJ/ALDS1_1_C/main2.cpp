#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    ll n;
    scanf("%lld", &n);
    // cout << n << endl;
    vll num(n);

    ll maximum = -1;
    for(ll i = 0; i < n; i++) {
        scanf("%lld", &num[i]);
        maximum = max(maximum, num[i]);
    }

    vector<bool> era(maximum + 1, true);
    era[0] = era[1] = false;
    for(ll i = 2; i * i <= maximum; i++) {
        if(era[i]) {
            for(ll j = 2; i * j <= maximum; j++) {
                era[i * j] = false;
            }
        }
    }

    ll ans = 0;
    for(auto&& x : num) {
        if(era[x]) ans++;
    }
    cout << ans << endl;
}