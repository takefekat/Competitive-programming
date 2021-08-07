#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll op(ll l, ll r) { return l + r; }

ll e() { return 0; }

ll mapping(F l, ll r) { return ll{r.a * l.a + r.size * l.b, r.size}; }

F composition(F l, F r) { return F{r.a * l.a, r.b * l.a + l.b}; }

F id() { return F{1, 0}; }

int main() {
    ll Q;
    cin >> Q;
    for (ll i = 0; i < Q; i++) {
        ll p;
        cin >> p;
        if (p == 1) {
        } else if (p == 2) {
        } else {
        }
    }
    return 0;
}
