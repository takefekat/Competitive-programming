#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long R, long long X, long long Y) {
    ld ans = (ld)(X * X + Y * Y) / (ld)(R * R);
    ll ans_ = sqrt(ans);
    ll num = (ans_ * ans_ == ans ? ans_ : ans_ + 1);
    cout << num << endl;
}

int main() {
    long long R;
    scanf("%lld", &R);
    long long X;
    scanf("%lld", &X);
    long long Y;
    scanf("%lld", &Y);
    solve(R, X, Y);
    return 0;
}
