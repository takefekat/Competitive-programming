#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long H, long long W, std::vector<std::vector<long long>> c,
           std::vector<std::vector<long long>> A) {
    for (ll k = 0; k < 10; k++) {
        for (ll i = 0; i < 10; i++) {
            for (ll j = 0; j < 10; j++) {
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            if (A[i][j] != -1) {
                ans += c[A[i][j]][1];
            }
        }
    }
    cout << ans << endl;
}

int main() {
    long long H;
    scanf("%lld", &H);
    long long W;
    scanf("%lld", &W);
    std::vector<std::vector<long long>> c(9 - 0 + 1,
                                          std::vector<long long>(9 - 0 + 1));
    for (int i = 0; i < 9 - 0 + 1; i++) {
        for (int j = 0; j < 9 - 0 + 1; j++) {
            scanf("%lld", &c[i][j]);
        }
    }
    std::vector<std::vector<long long>> A(H, std::vector<long long>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            scanf("%lld", &A[i][j]);
        }
    }
    solve(H, W, std::move(c), std::move(A));
    return 0;
}
