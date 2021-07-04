#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> A) {
    vll cnt(200, 0);
    for (ll i = 0; i < N; i++) {
        cnt[A[i] % 200]++;
    }
    ll ans = 0;

    for (ll i = 0; i < 200; i++) {
        if (cnt[i] > 0) ans += cnt[i] * (cnt[i] - 1) / 2;
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
