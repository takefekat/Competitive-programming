#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long n)
{
    ll res;
    for (ll i = 0; i * (i + 1) / 2 <= n + 1; i++)
    {
        res = i;
    }
    cout << n - res + 1 << endl;
}

signed main()
{
    long long n;
    scanf("%lld", &n);
    solve(n);
    return 0;
}
