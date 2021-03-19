#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long A, long long B, long long K) {
    ll ans = 1;
    ll k = 0;
    for (ll i = min(A, B); i > 0; i--) {
        if (A % i == 0 and B % i == 0) {
            k++;
            if (k == K) ans = i;
        }
    }
    cout << ans << endl;
}

int main() {
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long K;
    scanf("%lld", &K);
    solve(A, B, K);
    return 0;
}
