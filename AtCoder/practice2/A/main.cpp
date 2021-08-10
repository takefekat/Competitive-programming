#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;

using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;

#define rep(i, n) for (int i = 0; i < (int)(n), i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, long long Q, std::vector<long long> t,
           std::vector<long long> u, std::vector<long long> v) {}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> t(Q);
    std::vector<long long> u(Q);
    std::vector<long long> v(Q);
    for (int i = 0; i < Q; i++) {
        std::scanf("%lld", &t[i]);
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
    }
    solve(N, Q, std::move(t), std::move(u), std::move(v));
    return 0;
}
