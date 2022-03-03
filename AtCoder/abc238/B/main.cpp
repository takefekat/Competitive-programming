#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, std::vector<long long> A) {
    vll cut = {0, 360};
    ll deg = 0;
    for(ll i = 0; i < N; i++) {
        deg += A[i];
        if(deg >= 360) deg -= 360;

        cut.push_back(deg);
    }
    sort(all(cut));
    ll ans = 0;
    for(ll i = 0; i < cut.size() - 1; i++) {
        ans = max(ans, cut[i + 1] - cut[i]);
    }
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
