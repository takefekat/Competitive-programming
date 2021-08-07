#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> lx, std::vector<long long> ly,
           std::vector<long long> rx, std::vector<long long> ry) {
    vvll m(1010, vll(1010, 0));
    for (ll i = 0; i < N; i++) {
        m[ly[i]][lx[i]]++;
        m[ry[i]][rx[i]]++;

        m[ry[i]][lx[i]]--;
        m[ly[i]][rx[i]]--;
    }

    vll ans(N + 1, 0);
    for (ll i = 0; i <= 1000; i++) {
        for (ll j = 0; j <= 1000; j++) {
            m[i][j + 1] += m[i][j];
        }
    }
    for (ll i = 0; i <= 1000; i++) {
        for (ll j = 0; j <= 1000; j++) {
            m[i + 1][j] += m[i][j];
        }
    }
    for (ll i = 0; i <= 1000; i++) {
        for (ll j = 0; j <= 1000; j++) {
            ans[m[i][j]]++;
        }
    }
    for (ll i = 0; i < N; i++) {
        cout << ans[i + 1] << endl;
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> lx(N);
    std::vector<long long> ly(N);
    std::vector<long long> rx(N);
    std::vector<long long> ry(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &lx[i]);
        std::scanf("%lld", &ly[i]);
        std::scanf("%lld", &rx[i]);
        std::scanf("%lld", &ry[i]);
    }
    solve(N, std::move(lx), std::move(ly), std::move(rx), std::move(ry));
    return 0;
}
