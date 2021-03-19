#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll rec(vvll& dp, vll& A, vll& B, ll a, ll b, ll turn) {
    ll res = -1;
    if (dp[a][b] > -1) return dp[a][b];

    if (a > 0)
        res = max(res, rec(dp, A, B, a - 1, b, (turn + 1) % 2) +
                           (turn == 0 ? A[a - 1] : 0));
    if (b > 0)
        res = max(res, rec(dp, A, B, a, b - 1, (turn + 1) % 2) +
                           (turn == 0 ? B[b - 1] : 0));

    // cout << "(" << a << "," << b << ") : " << res << endl;

    return dp[a][b] = res;
}

void solve(long long A, long long B, std::vector<long long> a,
           std::vector<long long> b) {
    vvll dp(1010, vll(1010, -1));

    dp[0][0] = 0;
    reverse(a.begin(), b.end());
    reverse(b.begin(), b.end());

    ll ans = rec(dp, a, b, A, B, 0);
    cout << ans << endl;
}

int main() {
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    std::vector<long long> a(A);
    for (int i = 0; i < A; i++) {
        scanf("%lld", &a[i]);
    }
    std::vector<long long> b(B);
    for (int i = 0; i < B; i++) {
        scanf("%lld", &b[i]);
    }
    solve(A, B, std::move(a), std::move(b));
    return 0;
}
