#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";

int main() {
    ll T;
    cin >> T;

    for(ll i = 0; i < T; i++) {
        ll a, s;
        // scanf("%Ld", &a);
        // scanf("%Ld", &s);
        cin >> a >> s;

        ll y = 0;
        for(ll p = 1; p <= max(a, s); p <<= 1) {
            ll da = (a & p);
            if(da != 0) {  // x=1,y=1;
                y += p;
            }
        }
        ll x = s - y;
        string ans;
        if(x >= 0 and ((x & y) == a))
            ans = YES;
        else
            ans = NO;
        // cout << a << " " << s << " " << x << " " << y << " ";
        cout << ans << endl;
    }
    return 0;
}
