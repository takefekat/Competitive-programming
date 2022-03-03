#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";

ll dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

void solve(std::vector<long long> x, std::vector<long long> y) {
    string ans = NO;
    for(ll i = 0; i < 8; i++) {
        ll xx = x[0] + dx[i];
        ll yy = y[0] + dy[i];
        if((x[1] - xx) * (x[1] - xx) + (y[1] - yy) * (y[1] - yy) == 5)
            ans = YES;
    }
    cout << ans << endl;
}

int main() {
    std::vector<long long> x(2);
    std::vector<long long> y(2);
    for(int i = 0; i < 2; i++) {
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    solve(std::move(x), std::move(y));
    return 0;
}
