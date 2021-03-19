#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct people {
    ll r;
    ll h;
    ll i;
    people(ll r, ll h, ll i) : r(r), h(h), i(i) {}

    bool operator<(const people& p) const { return r < p.r; }
};

void solve(long long N, std::vector<long long> R, std::vector<long long> H) {
    vector<people> p(N);
    for (ll i = 0; i < N; i++) p[i] = people(R[i], H[i]);
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> R(N);
    std::vector<long long> H(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &R[i]);
        scanf("%lld", &H[i]);
    }
    solve(N, std::move(R), std::move(H));
    return 0;
}
