#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long A, long long B, long long C) {
    ll g = gcd(gcd(A, B), C);
    ll ans = A / g + B / g + C / g - 3;
    cout << ans << endl;
}

int main() {
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    long long C;
    std::scanf("%lld", &C);
    solve(A, B, C);
    return 0;
}
