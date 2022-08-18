#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(std::vector<long long> L, std::vector<long long> R) {
    ll ans = max((ll)0, min(R[0], R[1]) - max(L[0], L[1]));
    cout << ans << endl;
}

int main() {
    std::vector<long long> L(2);
    std::vector<long long> R(2);
    for(int i = 0; i < 2; i++) {
        std::scanf("%lld", &L[i]);
        std::scanf("%lld", &R[i]);
    }
    solve(std::move(L), std::move(R));
    return 0;
}
