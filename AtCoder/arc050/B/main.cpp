#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long R, long long B, long long x, long long y) {
    ll l = 0;
    ll r = 1LL << 62;
    while (r - l > 1) {
        ll m = l + (r - l) / 2;
        if (R - m >= 0 and B - m >= 0 and
            (R - m) / (x - 1) + (B - m) / (y - 1) >= m)
            l = m;
        else
            r = m;
    }
    cout << l << endl;
}

int main() {
    long long R;
    scanf("%lld", &R);
    long long B;
    scanf("%lld", &B);
    long long x;
    scanf("%lld", &x);
    long long y;
    scanf("%lld", &y);
    solve(R, B, x, y);
    return 0;
}
