#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    string s;
    cin >> s;

    if (s[0] == s[1] and s[1] == s[2] and s[2] == s[3]) {
        cout << "Weak" << endl;
        return 0;
    }

    bool f = true;
    for (ll i = 0; i < 3; i++) {
        if (s[i] != '9') {
            if (s[i + 1] - s[i] != 1) f = false;
        } else {
            if (s[i + 1] != '0') f = false;
        }
    }
    cout << (!f ? "Strong" : "Weak") << endl;
    return 0;
}
