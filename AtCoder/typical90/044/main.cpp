#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long Q, std::vector<long long> A,
           std::vector<long long> T, std::vector<long long> x,
           std::vector<long long> y) {
    ll head = 0;
    for (ll i = 0; i < Q; i++) {
        if (T[i] == 1) {
            ll idx = (head + x[i]) % N;
            ll idy = (head + y[i]) % N;
            swap(A[idx], A[idy]);
        } else if (T[i] == 2) {
            head--;
            if (head == -1) head = N - 1;
        } else {
            ll idx = (head + x[i]) % N;
            cout << A[idx] << endl;
        }

        // for (ll i = 0; i < N; i++) cout << A[(head + i) % N] << " ";

        // cout << endl;
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> T(Q);
    std::vector<long long> x(Q);
    std::vector<long long> y(Q);
    for (int i = 0; i < Q; i++) {
        std::scanf("%lld", &T[i]);
        std::scanf("%lld", &x[i]);
        x[i]--;
        std::scanf("%lld", &y[i]);
        y[i]--;
    }
    solve(N, Q, std::move(A), std::move(T), std::move(x), std::move(y));
    return 0;
}
