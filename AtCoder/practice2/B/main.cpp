#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;

using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    ll N, Q;
    cin >> N >> Q;

    fenwick_tree<ll> fw(N);

    rep(i, N) {
        ll a;
        cin >> a;
        fw.add(i, a);
    }

    for (ll i = 0; i < Q; i++) {
        ll a, p, x;
        cin >> a >> p >> x;
        if (a == 0) {
            fw.add(p, x);
        } else {
            cout << fw.sum(p, x) << endl;
        }
    }

    return 0;
}
