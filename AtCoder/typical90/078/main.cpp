#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long M, std::vector<long long> a,
           std::vector<long long> b) {
    vll cnt(N, 0);
    for (ll i = 0; i < M; i++) {
        ll s = max(a[i], b[i]);
        cnt[s]++;
    }
    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        if (cnt[i] == 1) ans++;
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    for (int i = 0; i < M; i++) {
        std::scanf("%lld", &a[i]);
        a[i]--;
        std::scanf("%lld", &b[i]);
        b[i]--;
    }
    solve(N, M, std::move(a), std::move(b));
    return 0;
}
