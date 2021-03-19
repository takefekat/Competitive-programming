#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

void solve(long long N, long long K, std::vector<long long> w,
           std::vector<long long> p) {
    // 濃度pi = 食塩 / 食塩水wi
    

    
    printf("%.10Lf\n",ans);
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> w(N);
    std::vector<long long> p(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &w[i]);
        scanf("%lld", &p[i]);
    }
    solve(N, K, std::move(w), std::move(p));
    return 0;
}
