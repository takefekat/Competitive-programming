#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll N;

ll rec(ll res, ll keta, ll end) {
    if (keta == end) {
        if (res <= N) {
            vector<bool> flag(3, false);
            for (auto c : to_string(res)) {
                if (c == '3') flag[0] = true;
                if (c == '5') flag[1] = true;
                if (c == '7') flag[2] = true;
            }
            if (flag[0] and flag[1] and flag[2] == true) {
                return 1;
            }
        }
        return 0;
    }
    ll ans = 0;
    ans += rec(res * 10 + 3, keta + 1, end);
    ans += rec(res * 10 + 5, keta + 1, end);
    ans += rec(res * 10 + 7, keta + 1, end);
    return ans;
}

int main() {
    cin >> N;
    ll ans = 0;
    for (ll i = 3; i < log10(N) + 1; i++) {
        ans += rec(0, 0, i);
    }
    cout << ans << endl;

    return 0;
}
