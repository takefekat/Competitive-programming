#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

bool is_ok(ll m, ll K, vll& A) {
    ll res = 0;
    ll sum = 0;
    for (ll i = 0; i < A.size() - 1; i++) {
        sum += A[i + 1] - A[i];
        if (sum >= m) {
            res++;
            sum = 0;
        }
    }
    if (res >= K + 1)
        return true;
    else
        return false;
}

void solve(long long N, long long L, long long K, std::vector<long long> A) {
    ll l = 1, r = L;
    while (r - l > 1) {
        ll m = l + (r - l) / 2;
        if (!is_ok(m, K, A))
            r = m;
        else
            l = m;
    }

    cout << l << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long L;
    std::scanf("%lld", &L);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> A(N + 2, 0);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i + 1]);
    }
    A[N + 1] = L;
    solve(N, L, K, std::move(A));
    return 0;
}
