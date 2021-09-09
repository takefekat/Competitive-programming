#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    ll N;
    cin >> N;
    vll r(N), c(N);
    for (ll i = 0; i < N; i++) cin >> r[i] >> c[i];

    vvll dp(N + 1, vll(N + 1, 0));
}