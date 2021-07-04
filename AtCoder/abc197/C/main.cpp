#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> A) {
    ll ans = 1LL << 60;
    for (ll i = 0; i < 1LL << (N - 1); i++) {  // 全探索
        ll idx = 0;                            // [idx,j)
        ll or_ = A[0];
        ll xor_ = 0;

        for (ll j = 0; j < N; j++) {  // xorのシミュレーション
            if (j == N - 1) {
                or_ |= A[j];
                xor_ ^= or_;
            } else if (((i & (1 << j)) != 0)) {  // jで区切る
                xor_ ^= or_;
                or_ = A[j + 1];
            } else {
                or_ |= A[j + 1];
            }
        }
        ans = min(ans, xor_);
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
