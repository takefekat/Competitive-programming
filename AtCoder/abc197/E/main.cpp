#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct p {
    ll x, c;
    p(ll x, ll c) : x(x), c(c){};
    bool operator<(const p& t) { return (c == t.c ? x < t.x : c < t.c); }
};

int main() {
    ll N;
    cin >> N;
    vll x(N), C(N);
    for (ll i = 0; i < N; i++) {
        cin >> x[i] >> C[i]
    }
    return 0;
}
