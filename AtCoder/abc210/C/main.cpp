#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long K, std::vector<long long> c) {
    map<ll, ll> s;
    for (ll i = 0; i < K; i++) {
        if (s.find(c[i]) == s.end())
            s[c[i]] = 1;
        else
            s[c[i]]++;
    }

    ll ans = s.size();
    for (ll i = K; i < N; i++) {
        if (s[c[i - K]] == 1)
            s.erase(c[i - K]);
        else
            s[c[i - K]]--;

        if (s.find(c[i]) == s.end())
            s[c[i]] = 1;
        else
            s[c[i]]++;

        ans = max((ll)s.size(), ans);
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> c(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &c[i]);
    }
    solve(N, K, std::move(c));
    return 0;
}
