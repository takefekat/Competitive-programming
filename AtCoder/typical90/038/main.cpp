#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll Large = 1000000000000000000LL;  // 10^18

void solve(long long A, long long B) {
    ll x = gcd(A, B);
    ll ans = A / x * B;
    if (log10((ld)Large) < log10((ld)A / x) + log10((ld)B))
        cout << "Large" << endl;
    else
        cout << ans << endl;
}

int main() {
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    solve(A, B);
    return 0;
}
