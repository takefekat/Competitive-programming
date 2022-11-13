#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 998244353;

int main() {
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    a %= MOD;
    b %= MOD;
    c %= MOD;
    d %= MOD;
    e %= MOD;
    f %= MOD;

    ll ans = (((a*b%MOD)*c%MOD) - ((d*e%MOD)*f%MOD) + MOD) % MOD;
    cout << ans << endl;

    return 0;
}
