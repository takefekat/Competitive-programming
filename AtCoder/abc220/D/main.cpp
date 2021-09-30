#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

map<string, vll> memo;

void solve(long long N, std::vector<long long>& A, string s) {
    vll res_pre(10, 0);
    res_pre[A[0]] = 1;
    for (ll i = 1; i < N; i++) {
        vll res(10, 0);
        for (ll j = 0; j < 10; j++) {
            res[(j + A[i]) % 10] += res_pre[j];
            res[(j + A[i]) % 10] %= MOD;
            res[(j * A[i]) % 10] += res_pre[j];
            res[(j * A[i]) % 10] %= MOD;
        }
        res_pre = res;
    }
    for (ll i = 0; i < 10; i++) {
        cout << res_pre[i] << endl;
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    string s;
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
        s += to_string(A[i]);
    }
    solve(N, A, s);
    return 0;
}
