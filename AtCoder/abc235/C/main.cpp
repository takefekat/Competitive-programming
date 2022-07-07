#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, long long Q, std::vector<long long> a,
           std::vector<long long> x, std::vector<long long> k) {
    map<ll, ll> cnt;
    map<pair<ll, ll>, ll> pair_xk;

    for(ll i = 0; i < N; i++) {
        if(cnt.find(a[i]) == cnt.end())
            cnt[a[i]] = 1;
        else
            cnt[a[i]] = cnt[a[i]] + 1;

        pair_xk[{a[i], cnt[a[i]]}] = i + 1;
    }

    for(ll i = 0; i < Q; i++) {
        if(pair_xk.find({x[i], k[i]}) == pair_xk.end())
            cout << -1 << endl;
        else
            cout << pair_xk[{x[i], k[i]}] << endl;
    }
}
int main() {
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> a(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &a[i]);
    }
    std::vector<long long> x(Q);
    std::vector<long long> k(Q);
    for(int i = 0; i < Q; i++) {
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &k[i]);
    }
    solve(N, Q, std::move(a), std::move(x), std::move(k));
    return 0;
}
