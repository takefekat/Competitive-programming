#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long Q, std::vector<long long> t, std::vector<long long> x) {
    vll a(100000, -1);
    ll fr = 100000 - 1;
    for (ll i = 0; i < Q; i++) {
        if (t[i] == 1) {
            a[fr] = x[i];
            fr--;
        } else if (t[i] == 2) {
            a.push_back(x[i]);
        } else {
            cout << a[fr + x[i]] << endl;
        }
    }
}

int main() {
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> t(Q);
    std::vector<long long> x(Q);
    for (int i = 0; i < Q; i++) {
        std::scanf("%lld", &t[i]);
        std::scanf("%lld", &x[i]);
    }
    solve(Q, std::move(t), std::move(x));
    return 0;
}
