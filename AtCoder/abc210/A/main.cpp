#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long A, long long X, long long Y) {
    ll ans = (N > A ? X * A + Y * (N - A) : X * N);
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long A;
    std::scanf("%lld", &A);
    long long X;
    std::scanf("%lld", &X);
    long long Y;
    std::scanf("%lld", &Y);
    solve(N, A, X, Y);
    return 0;
}
