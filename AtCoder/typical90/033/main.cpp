#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long H, long long W) {
    vvll m(H, vll(W, 0));
    ll ans = 0;
    if (H == 1 or W == 1) {
        cout << H * W << endl;
        return;
    }
    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            if (i > 0 and j > 0 and m[i - 1][j - 1] == 1) continue;
            if (i > 0 and m[i - 1][j] == 1) continue;
            if (j > 0 and m[i][j - 1] == 1) continue;
            ans++;
            m[i][j] = 1;
        }
    }
    cout << ans << endl;
}

int main() {
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    solve(H, W);
    return 0;
}
