#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll INF = 1LL << 60;

void solve(long long N, std::vector<long long> A, std::vector<long long> P,
           std::vector<long long> X) {
    ll ans = INF;
    for (ll i = 0; i < N; i++) {
        if (X[i] - A[i] > 0) ans = min(ans, P[i]);
    }
    if (ans == INF) ans = -1;
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    std::vector<long long> P(N);
    std::vector<long long> X(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
        scanf("%lld", &P[i]);
        scanf("%lld", &X[i]);
    }
    solve(N, std::move(A), std::move(P), std::move(X));
    return 0;
}
