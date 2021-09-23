#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void eight2five(string& s) {
    for (auto&& c : s) {
        if (c == '8') c = '5';
    }
}

void nine(string& s) {
    ll x = 0;
    for (ll i = 0; i < s.size(); i++) {
        ll c = s[s.size() - 1 - i] - '0';
        x += c * (ll)pow(8, i);
    }

    string res;
    do {
        res = to_string(x % 9) + res;
        x /= 9;
    } while (x > 0);
    s = res;
}

int main() {
    string s;
    ll K;
    cin >> s >> K;

    for (ll i = 0; i < K; i++) {
        nine(s);
        // cout << s << " --> ";
        eight2five(s);
        // cout << s << endl;
    }
    cout << s << endl;
}
