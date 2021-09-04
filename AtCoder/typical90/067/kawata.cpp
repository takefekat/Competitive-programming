#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL << 60;  // 十分大きな値に
typedef long long ll;
typedef long double ld;

ll ctoll(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return 0;
}

ll cvt8sin_to_10sin(string str_8sin) {
    ll int_10sin = 0;
    ll tmp = 1;
    ll tmp_str;

    for (int i = str_8sin.length() - 1; i >= 0; i--) {
#ifdef debug
        cout << "# " << str_8sin[i] << endl;
#endif
        int_10sin += tmp * ctoll(str_8sin[i]);
#ifdef debug
        cout << "tmp: " << tmp << endl;
        cout << "int_10sin: " << int_10sin << endl;
#endif
        tmp *= 8;
    }
#ifdef debug
    cout << "## " << int_10sin << endl;
#endif

    return int_10sin;
}

string cvt10sin_to_str9sin(ll int_10sin) {
    ll base = 9;
    vector<ll> arr;

    while (true) {
        ll amari = int_10sin % base;
        arr.push_back(amari);
        int_10sin = (int_10sin - amari) / base;
        if (int_10sin < base) {
            arr.push_back(int_10sin);
            break;
        }
    }
    reverse(arr.begin(), arr.end());
    string str_9sin;

    for (ll i : arr) {
        str_9sin += to_string(i);
    }

    return str_9sin;
}

string chg_8_to_5(string str_org) {
    for (int i = 0; i < str_org.length(); i++) {
        if (str_org[i] == '8') {
            str_org[i] = '5';
        }
    }
    return str_org;
}
string chg2_9sin(string str_8sin) {
    // 8進文字列を10進数にする
    ll int_10sin = cvt8sin_to_10sin(str_8sin);

#ifdef debug
    cout << int_10sin << endl;
#endif

    // 10進数を9進数文字列に直す
    string str_9sin = cvt10sin_to_str9sin(int_10sin);
#ifdef debug
    cout << str_9sin << endl;
#endif

    // 8を5になおす
    string str_out = chg_8_to_5(str_9sin);
#ifdef debug
    cout << str_out << endl;
    cout << "------" << endl;
#endif

    return str_out;
}
int main() {
    string n;
    int k;
    cin >> n >> k;

    string output = n;
    for (int i = 0; i < k; i++) {
        output = chg2_9sin(output);
    }
    cout << output << endl;
}