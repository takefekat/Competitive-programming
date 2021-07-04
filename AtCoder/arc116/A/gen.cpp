#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ll T;
    cin >> T;

    for (ll i = 0; i < T; i++) {
        ll c;
        cin >> c;

        ll odd = 0, even = 0;
        for (ll j = 1; j <= c; j++) {
            if (c % j == 0) {
                if (j & 1)
                    odd++;
                else
                    even++;
            }
        }
        if (odd > even)
            cout << "Odd" << endl;
        else if (odd < even)
            cout << "Even" << endl;
        else
            cout << "Same" << endl;
    }
}