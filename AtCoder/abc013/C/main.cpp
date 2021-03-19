#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long H, long long A, long long B, long long C,
           long long D, long long E) {
    ll ans = 1LL << 60;
    // i:質素な生活をする日数
    for (ll i = 0; i <= N; i++) {
        ll h = H + i * D;
        // 質素な生活の日数だけで足りる場合
        if (h - (N - i) * E > 0) ans = min(ans, i * C);
        // 質素な生活と普通の生活の両方を行う場合
        else {
            ll j = ceil((double)(N * E - i * E - i * D - H) / (B + E));
            if (i * D + j * B + H <= (N - i - j) * E) j++;
            ans = min(ans, i * C + j * A);
        }
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long H;
    scanf("%lld", &H);
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long C;
    scanf("%lld", &C);
    long long D;
    scanf("%lld", &D);
    long long E;
    scanf("%lld", &E);
    solve(N, H, A, B, C, D, E);
    return 0;
}
