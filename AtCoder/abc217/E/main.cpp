#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    ll Q;
    cin >> Q;

    map<ll, ll> se;
    deque<ll> ve;
    for (ll i = 0; i < Q; i++) {
        ll f;
        cin >> f;
        if (f == 1) {
            ll x;
            cin >> x;
            ve.push_back(x);
        } else if (f == 2) {
            if (se.empty()) {
                printf("%Ld\n", ve[0]);
                ve.pop_front();
            } else {
                auto fr = *(se.begin());
                printf("%Ld\n", fr.first);
                if (fr.second == 1)
                    se.erase(fr.first);
                else
                    se[fr.first] = fr.second - 1;
            }
        } else {
            for (auto &&e : ve) {
                if (se.find(e) != se.end())
                    se[e]++;
                else
                    se[e] = 1;
            }
            ve.clear();
        }
    }

    return 0;
}
