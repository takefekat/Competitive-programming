#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N) {
    ll ans = N;
    vector<int> is_pow((ll)sqrt(N) + 1, true);
    for (ll a = 2; a * a <= N; a++) {
        if (!is_pow[a]) continue;
        ll ab = a;
        for (; ab <= N; ab *= a) {
            if (ab * ab <= N) is_pow[ab] = false;
            ans--;
        }
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
