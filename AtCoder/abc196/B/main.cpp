#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long double X) { cout << X << endl; }

int main() {
    string s;
    cin >> s;
    for (auto &&e : s) {
        if (e == '.') {
            break;
        }
        cout << e;
    }
    cout << endl;
}
