#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    string s;
    cin >> s;
    if (s[0] == s[1] and s[1] == s[2])
        cout << "Won" << endl;
    else
        cout << "Lost" << endl;
    return 0;
}
