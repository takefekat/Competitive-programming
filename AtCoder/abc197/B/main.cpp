#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ll H, W, X, Y;
    cin >> H >> W >> X >> Y;
    X--;
    Y--;
    swap(X, Y);

    vector<string> s(H);
    for (ll i = 0; i < H; i++) cin >> s[i];
    ll ans = 1;
    for (ll i = Y + 1; i < H; i++) {
        if (s[i][X] != '#')
            ans++;
        else
            break;
    }
    for (ll i = Y - 1; i >= 0; i--) {
        if (s[i][X] != '#')
            ans++;
        else
            break;
    }
    for (ll i = X + 1; i < W; i++) {
        if (s[Y][i] != '#')
            ans++;
        else
            break;
    }
    for (ll i = X - 1; i >= 0; i--) {
        if (s[Y][i] != '#')
            ans++;
        else
            break;
    }
    cout << ans << endl;

    return 0;
}
