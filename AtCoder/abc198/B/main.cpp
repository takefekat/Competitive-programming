#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N) {}

int main() {
    string s;
    cin >> s;
    for (ll i = s.size() - 1; i >= 0; i--) {
        if (s[i] != '0') {
            s = s.substr(0, i + 1);
            break;
        }
    }
    // cout << s << endl;

    string ans = YES;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            ans = NO;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
