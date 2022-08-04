#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

ll N, X, Y;

ll rec(ll r, ll b) {
    if(n == 1) return dp[1] = X;
    return (2 * X + 1) * rec(n - 1) +
}

int main() {
    cin >> N >> X >> Y;
    return 0;
}
