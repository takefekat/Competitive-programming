#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N) {
    ll keta = log10(N) + 1;
    ll ans = 0;
    if (keta & 1) {
        ans = (ll)pow(10, keta / 2) - 1;
    } else {
        ll ue = N / (ll)pow(10, keta / 2);
        ll si = N % (ll)pow(10, keta / 2);
        if (ue <= si)
            ans = ue;
        else
            ans = ue - 1;
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
