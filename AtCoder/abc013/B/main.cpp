#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long a, long long b) {
    if (a < b) swap(a, b);
    ll ans = min(a - b, b + 10 - a);
    cout << ans << endl;
}

int main() {
    long long a;
    scanf("%lld", &a);
    long long b;
    scanf("%lld", &b);
    solve(a, b);
    return 0;
}
