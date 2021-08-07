#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long K, std::vector<long long> a) {
    map<ll, ll> m;
    ll l = 0;
    ll ans = 0;
    ll len = 0;
    for (ll i = 0; i < N; i++) {
        // a[i]を追加できるか調べる
        // a[i]を追加できない場合は、追加できるようになるまでlを進める
        while (m.size() + (m.find(a[i]) == m.end() ? 1 : 0) > K) {
            if (m[a[l]] <= 1)
                m.erase(a[l]);
            else
                m[a[l]]--;
            l++;
            len--;
        }

        // a[i]を追加して ansを更新
        if (m.find(a[i]) == m.end())
            m[a[i]] = 1;
        else
            m[a[i]]++;
        len++;
        ans = max(ans, len);
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &a[i]);
    }
    solve(N, K, std::move(a));
    return 0;
}
