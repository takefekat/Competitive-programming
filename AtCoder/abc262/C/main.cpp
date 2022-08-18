#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, std::vector<long long> a) {
    ll ans = 0, cnt_eq = 0;
    for(ll i = 0; i < N; i++) {
        if(a[i] == i)
            cnt_eq++;
        else if(a[a[i]] == i)
            ans++;
    }
    ans /= 2;
    ans += cnt_eq * (cnt_eq - 1) / 2;
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> a(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &a[i]);
        a[i]--;
    }
    solve(N, std::move(a));
    return 0;
}
