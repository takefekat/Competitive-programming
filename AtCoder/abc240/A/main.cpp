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

void solve(long long a, long long b) {
    string ans = NO;
    if(abs(a - b) == 1 or abs(a - b) == 9) ans = YES;
    cout << ans << endl;
}

int main() {
    long long a;
    std::scanf("%lld", &a);
    long long b;
    std::scanf("%lld", &b);
    solve(a, b);
    return 0;
}
