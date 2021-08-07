#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    for (ll c = 1; c <= 13; c++) {
        for (ll b = 1; b <= 17; b++) {
            ll x = 1;
            for (ll i = 0; i < b; i++) {
                x *= c;
            }

            if ((double)x != (double)pow(c, b)) {
                cout << "(c,b,x,pow) = (" << c << ", " << b << ", " << x
                     << ", ";
                printf("%lld)\n", (ll)pow(c, b));
            }
        }
    }
}
