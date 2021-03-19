#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(vll& A) {
    ll ans = 0;
    vll t(5);
    for (ll i = 0; i < 5; i++) {
        t[i] = (A[i] + 9) / 10 * 10 - A[i];
        ans += A[i];
    }
    sort(t.begin(), t.end());
    for (ll i = 0; i < 4; i++) {
        ans += t[i];
    }
    cout << ans << endl;
}

int main() {
    vll A(5);
    for (ll i = 0; i < 5; i++) {
        cin >> A[i];
    }
    solve(A);
    return 0;
}
