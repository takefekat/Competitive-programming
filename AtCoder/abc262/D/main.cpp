#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, std::vector<long long> a) {
    vvvll dp(110, vvll(110, vll(110, 0)));
    dp[0][0][0] = 1;
    for(ll i = 0; i < N; i++) {
        for(ll j = 0; j < N; j++) {
            for(ll k = 0; k < N; k++) {
                dp[i + 1][j + 1][(k + a[i])]
            }
        }
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> a(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
