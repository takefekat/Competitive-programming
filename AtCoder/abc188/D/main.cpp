#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct st {
    ll date;
    ll cost;
    bool operator<(const st& tmp) const { return date < tmp.date; }
};

void solve(long long N, long long C, std::vector<long long> a,
           std::vector<long long> b, std::vector<long long> c) {
    vector<st> s;

    for (ll i = 0; i < N; i++) {
        s.push_back({a[i], c[i]});
        s.push_back({b[i] + 1, -1 * c[i]});
    }
    sort(s.begin(), s.end());

    ll ans = 0;
    ll cost = s[0].cost;
    for (ll i = 1; i < s.size(); i++) {
        // 清算
        ans += min(C, cost) * (s[i].date - s[i - 1].date);
        // cost更新
        cost += s[i].cost;
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long C;
    scanf("%lld", &C);
    std::vector<long long> a(N);
    std::vector<long long> b(N);
    std::vector<long long> c(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &a[i]);
        scanf("%lld", &b[i]);
        scanf("%lld", &c[i]);
    }
    solve(N, C, std::move(a), std::move(b), std::move(c));
    return 0;
}
