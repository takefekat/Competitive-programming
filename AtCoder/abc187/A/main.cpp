#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(string A, string B) {
    ll a = 0;
    ll b = 0;
    for (ll i = 0; i < A.size(); i++) a += stoi(A.substr(i, 1));
    for (ll i = 0; i < B.size(); i++) b += stoi(B.substr(i, 1));
    ll ans = b;
    if (a > b) ans = a;
    cout << ans << endl;
}

int main() {
    string A, B;
    cin >> A >> B;
    solve(A, B);
    return 0;
}
