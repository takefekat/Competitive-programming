#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::string s) {
    vvll sum(3, vll(N + 1, 0));

    // 累積和 sum[0][i]: i番目以降のRの個数
    for (ll i = N - 1; i >= 0; i--) {
        if (i != N - 1) {
            for (ll j = 0; j < 3; j++) sum[j][i] += sum[j][i + 1];
        }
        if (s[i] == 'R') sum[0][i]++;
        if (s[i] == 'G') sum[1][i]++;
        if (s[i] == 'B') sum[2][i]++;
    }

    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        for (ll j = i + 1; j < N; j++) {
            if (s[i] == s[j]) continue;
            if (s[i] != 'R' and s[j] != 'R') {
                ans += sum[0][j + 1];
                if (j + j - i < N and s[j + j - i] == 'R') ans--;
            }
            if (s[i] != 'G' and s[j] != 'G') {
                ans += sum[1][j + 1];
                if (j + j - i < N and s[j + j - i] == 'G') ans--;
            }
            if (s[i] != 'B' and s[j] != 'B') {
                ans += sum[2][j + 1];
                if (j + j - i < N and s[j + j - i] == 'B') ans--;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
