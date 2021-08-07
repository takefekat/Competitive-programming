#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long A, long long B, long long C) {
    vll a = {A, B, C};
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    ll ans = INT_MAX;
    for (ll i = 0; i < 10000; i++) {
        for (ll j = 0; i + j < 10000; j++) {
            if ((N - a[0] * i - a[1] * j) % a[2] == 0 and
                (N - a[0] * i - a[1] * j) >= 0)
                ans = min(ans, i + j + ((N - a[0] * i - a[1] * j) / a[2]));
        }
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    long long C;
    std::scanf("%lld", &C);
    solve(N, A, B, C);
    return 0;
}
