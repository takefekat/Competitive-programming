#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

struct wood {
    ll l, r, s;
    wood(ll l, ll r) : l(l), r(r) { s = r - l; }
    bool operator<(const wood& w) const {
        return (l == w.l ? r > w.r : l > w.l);
    }
};

void solve(long long L, long long Q, std::vector<long long> c,
           std::vector<long long> x) {
    set<wood> ws;
    ws.insert(wood(0, L));

    for (ll i = 0; i < Q; i++) {
        if (c[i] == 1) {
            wood w = *(ws.lower_bound(wood(x[i], -1)));
            ws.erase(w);
            ws.insert(wood(w.l, x[i]));
            ws.insert(wood(x[i], w.r));

        } else {
            wood w = *(ws.lower_bound(wood(x[i], -1)));
            printf("%Ld\n", w.s);
        }
    }
}

int main() {
    long long L;
    std::scanf("%lld", &L);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> c(Q);
    std::vector<long long> x(Q);
    for (int i = 0; i < Q; i++) {
        std::scanf("%lld", &c[i]);
        std::scanf("%lld", &x[i]);
    }
    solve(L, Q, std::move(c), std::move(x));
    return 0;
}
