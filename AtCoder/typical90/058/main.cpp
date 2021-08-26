#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const long long MOD = 100000;

ll update(ll x) {
    ll y = 0, t = x;
    do {
        y += t % 10;
        t /= 10;
    } while (t > 0);
    return (x + y) % MOD;
}

void solve(long long N, long long K) {
    vll res;
    set<ll> s;
    for (ll i = 0; i < 100010; i++) {
        if (s.find(N) != s.end()) break;
        res.push_back(N);
        s.insert(N);
        N = update(N);
    }
    ll idx = 0;
    for (ll i = 0; i < res.size(); i++) {
        if (res[i] == N) idx = i;
    }
    ll ans;
    if (K < idx) {
        ans = res[K];
    } else if (K < res.size()) {
        ans = res[K];
    } else {
        ll cycle = res.size() - idx;
        K = idx + ((K - idx) % cycle);
        ans = res[K];
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    solve(N, K);
    return 0;
}
