#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long K) {
    ll ans = 0;
    for (ll i = 1; i <= K; i++) {
        for (ll j = 1; j <= K; j++) {
            for (ll k = 1; k <= K; k++) {
                ans += gcd(gcd(i, j), k);
            }
        }
    }
    cout << ans << endl;
}

int main() {
    long long K;
    scanf("%lld", &K);
    solve(K);
    return 0;
}
