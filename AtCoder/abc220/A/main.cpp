#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long A, long long B, long long C) {
    ll ans = -1;
    for (ll i = A; i <= B; i++) {
        if (i % C == 0) ans = i;
    }
    cout << (ans != -1 ? ans : -1) << endl;
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
