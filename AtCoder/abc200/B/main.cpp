#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long K) {
    for (ll i = 0; i < K; i++) {
        if (N % 200 == 0) {
            N /= 200;
        } else {
            N *= 1000;
            N += 200;
        }
    }
    cout << N << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    solve(N, K);
    return 0;
}
