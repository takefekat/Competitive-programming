#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

bool ok(string& s) {
    ll cnt = 0;
    for (auto& e : s) {
        if (e == '(') {
            cnt++;
        } else {
            cnt--;
            if (cnt < 0) return false;
        }
    }
    if (cnt > 0) return false;
    return true;
}

void solve(long long N) {
    for (int i = 0; i < (1 << N); i++) {
        string res = "";
        for (ll j = N - 1; j >= 0; j--) {
            if (i & (1 << j))
                res += ")";
            else
                res += "(";
        }
        if (ok(res)) cout << res << endl;
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    solve(N);
    return 0;
}
