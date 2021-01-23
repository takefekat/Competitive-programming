#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N) {
    ll ans = 0;
    for (ll i = 1; i <= N; i++) {
        if (i % 3 != 0 and i % 5 != 0) ans += i;
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
