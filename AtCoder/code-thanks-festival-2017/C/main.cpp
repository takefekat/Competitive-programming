#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

struct st {
    ll val;
    ll idx;

    st(ll v, ll i) : val(v), idx(i) {}
    bool operator<(const st& s) const { return val > s.val; }
};

void solve(long long N, long long K, std::vector<long long> a,
           std::vector<long long> b) {
    priority_queue<st> pq;
    for(ll i = 0; i < N; i++) {
        pq.push(st{a[i], i});
    }

    ll ans = 0;
    for(ll i = 0; i < K; i++) {
        st t = pq.top();
        pq.pop();
        ans += t.val;

        pq.push(st{t.val + b[t.idx], t.idx});
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> a(N);
    std::vector<long long> b(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
    }
    solve(N, K, std::move(a), std::move(b));
    return 0;
}
