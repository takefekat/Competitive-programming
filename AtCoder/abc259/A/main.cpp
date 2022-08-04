#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    // input
    ll N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;

    // compute
    ll S = T - X * D;  // 生まれた時点の身長
    ll ans;
    if(M >= X) {
        ans = T;
    } else {
        ans = S + M * D;
    }
    cout << ans << endl;

    // output
    return 0;
}
