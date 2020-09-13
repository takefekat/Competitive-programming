#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N)
{

    ll ans = 0;
    vector<bool> isp((ll)sqrt(N) + 1, true);

    for (ll i = 2; i <= sqrt(N); i++)
    {
        if (isp[i])
        {
            for (ll j = 0; j * i <= N; j++)
            {
                if (i * j <= sqrt(N))
                {
                    isp[i * j] = false;
                }
            }
            if (N % i == 0)
            {
                ans++;
            }
        }
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
