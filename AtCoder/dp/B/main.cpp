#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

template <class T>
void chmin(T& a, T b) {
    if (a > b) a = b;
}

int main() {
    ll N, K;
    cin >> N >> K;

    vector<ll> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    vector<ll> dp(N, 1e+10);
    dp[0] = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 1; j <= K; j++) {
            if (i + j <= N - 1) chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }
    cout << dp[N - 1] << endl;
}
