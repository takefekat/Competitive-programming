#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ll N;
    cin >> N;
    
    vector<pair<ll, ll>> a(1 << N);
    for (ll i = 0; i < (1 << N); i++) {
        ll tmp;
        cin >> tmp;
        a[i] = pair<ll, ll>(tmp, i + 1);
    }
    while (a.size() != 2) {
        vector<pair<ll, ll>> res(a.size() / 2);
        for (ll i = 0; i < res.size(); i++) {
            res[i] =
                (a[2 * i].first > a[2 * i + 1].first ? a[2 * i] : a[2 * i + 1]);
        }
        swap(a, res);
    }

    cout << (a[0].first > a[1].first ? a[1].second : a[0].second) << endl;
    return 0;
}
