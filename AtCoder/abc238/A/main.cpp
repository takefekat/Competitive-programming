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

void solve(long long n) {
    string ans = YES;
    if(n == 2 or n == 3 or n == 4) ans = NO;
    cout << ans << endl;
}

int main() {
    long long n;
    std::scanf("%lld", &n);
    solve(n);
    return 0;
}
