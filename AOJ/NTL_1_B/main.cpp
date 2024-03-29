#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll MOD = 1000000007;

ll mypow(ll N, ll M) {
    if(M == 0) {
        return 1;
    }
    if(M % 2 == 0) {
        return mypow(N * N % MOD, M / 2);
    } else {
        return mypow(N * N % MOD, M / 2) * N % MOD;
    }
}

int main() {
    ll N, M;
    cin >> N >> M;
    cout << mypow(N, M) << endl;
}