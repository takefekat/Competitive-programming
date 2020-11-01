#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long a, long long b, long long c, long long d)
{

    ll ans = a * c;
    ans = max(ans, a * d);
    ans = max(ans, b * c);
    ans = max(ans, b * d);
    cout << ans << endl;
}

signed main()
{
    long long a;
    scanf("%lld", &a);
    long long b;
    scanf("%lld", &b);
    long long c;
    scanf("%lld", &c);
    long long d;
    scanf("%lld", &d);
    solve(a, b, c, d);
    return 0;
}
