#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

string recursive(string& ABCD, ll sum, ll op, string res) {
    if (op == 4) {
        string ans;
        if (sum == 7) ans = res + "=7";
        return ans;
    }

    string ans = "";
    int X = stoi(ABCD.substr(op, 1));

    // + を選んだ場合
    string p = recursive(ABCD, sum + X, op + 1, res + "+" + ABCD.substr(op, 1));
    if (p != "") ans = p;
    // - を選んだ場合
    string m = recursive(ABCD, sum - X, op + 1, res + "-" + ABCD.substr(op, 1));
    if (m != "") ans = m;
    return ans;
}

int main() {
    string ABCD;
    cin >> ABCD;

    ll A = stoi(ABCD.substr(0, 1));
    string res = ABCD.substr(0, 1);

    string ans = recursive(ABCD, A, 1, res);

    cout << ans << endl;

    return 0;
}
