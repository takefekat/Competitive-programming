#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> X, std::vector<long long> Y) {
    vll sumf_x(N, 0);
    vll sumf_y(N, 0);
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    for (ll i = 0; i < N; i++) {
        sumf_x[i] = X[i];
        sumf_y[i] = Y[i];
        if (i > 0) {
            sumf_x[i] += sumf_x[i - 1];
            sumf_y[i] += sumf_y[i - 1];
        }
    }
    ll ans_x = 1LL << 60, ans_y = 1LL << 60;
    for (ll i = 0; i < N; i++) {
        ll tmp = sumf_x[N - 1] - sumf_x[i] - X[i] * (N - 1 - i);
        tmp += (X[i] * i) - (i == 0 ? 0 : sumf_x[i - 1]);
        ans_x = min(ans_x, tmp);

        tmp = sumf_y[N - 1] - sumf_y[i] - Y[i] * (N - 1 - i);
        tmp += (Y[i] * i) - (i == 0 ? 0 : sumf_y[i - 1]);
        ans_y = min(ans_y, tmp);
    }
    cout << ans_x + ans_y << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> X(N);
    std::vector<long long> Y(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    solve(N, std::move(X), std::move(Y));
    return 0;
}
