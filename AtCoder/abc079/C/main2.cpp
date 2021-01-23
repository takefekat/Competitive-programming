#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

string recursive(string ABCD, int sum, int op, string res) {
    if (op == 4) {
        string ans = "hoge";
        string nana = "=7";
        if (sum == 7) ans = res + nana;
        return ans;
    }
    // cout << op << " " << res << endl;

    int X = stoi(ABCD.substr(op, 1));

    string ans;
    // + を選んだ場合
    string ope = "+";
    ans = recursive(ABCD, sum + X, op + 1, res + ope + ABCD.substr(op, 1));
    if (ans != "hoge") return ans;

    // - を選んだ場合
    ope = "-";
    ans = recursive(ABCD, sum - X, op + 1, res + ope + ABCD.substr(op, 1));
    if (ans != "hoge") return ans;
    return string("hoge");
}

int main() {
    string ABCD;
    cin >> ABCD;

    int A = stoi(ABCD.substr(0, 1));
    string res = ABCD.substr(0, 1);

    string ans = recursive(ABCD, A, 1, res);

    cout << ans << endl;

    return 0;
}
