#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> x, std::vector<long long> y) {
    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        for (ll j = i + 1; j < N; j++) {
            double a = (double)(y[i] - y[j]) / (double)(x[i] - x[j]);
            if (-1 <= a and a <= 1) ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &x[i]);
        scanf("%lld", &y[i]);
    }
    solve(N, std::move(x), std::move(y));
    return 0;
}
