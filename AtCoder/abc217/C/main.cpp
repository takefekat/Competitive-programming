#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, std::vector<long long> p) {
    vll q(N);
    for (ll i = 0; i < N; i++) {
        q[p[i] - 1] = i + 1;
    }
    for (ll i = 0; i < N; i++) {
        cout << q[i];
        if (i == N - 1)
            cout << endl;
        else
            cout << " ";
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> p(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &p[i]);
    }
    solve(N, std::move(p));
    return 0;
}
