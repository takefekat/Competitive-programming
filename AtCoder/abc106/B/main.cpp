#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N)
{
    ll ans = 0;
    for (ll i = 1; i <= N; i += 2)
    {
        ll yaku = 0;
        for (ll j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (j != i / j)
                    yaku += 2;
                else
                    yaku++;
            }
        }
        if (yaku == 8)
            ans++;
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
