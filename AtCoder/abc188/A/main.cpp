#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const string YES = "Yes";
const string NO = "No";

void solve(long long X, long long Y) {
    string ans;
    if (min(X, Y) + 3 > max(X, Y))
        ans = YES;
    else
        ans = NO;
    cout << ans << endl;
}

int main() {
    long long X;
    scanf("%lld", &X);
    long long Y;
    scanf("%lld", &Y);
    solve(X, Y);
    return 0;
}
