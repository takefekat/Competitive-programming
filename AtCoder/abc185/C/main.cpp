#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
void solve(long long L)
{
    ll ans = 1;
    vll tmp(11, 0);
    for (ll i = L - 1; i > L - 12; i--)
    {
        ans *= i;
        for (ll j = 0; j < 11; j++)
        {
            if (tmp[j] == 0 and ans % (j + 1) == 0)
            {
                ans /= (j + 1);
                tmp[j] = 1;
            }
        }
    }

    cout << ans << endl;
}

signed main()
{
    long long L;
    scanf("%lld", &L);
    solve(L);
    return 0;
}
