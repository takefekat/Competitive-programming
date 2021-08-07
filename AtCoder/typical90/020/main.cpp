#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const string YES = "Yes";
const string NO = "No";

void solve(long long a, long long b, long long c) {
    ll x = 1;
    for (ll i = 0; i < b; i++) {
        x *= c;
    }
    string ans = NO;
    if (a < x) ans = YES;
    cout << ans << endl;
}

int main() {
    long long a;
    std::scanf("%lld", &a);
    long long b;
    std::scanf("%lld", &b);
    long long c;
    std::scanf("%lld", &c);
    solve(a, b, c);
    return 0;
}
