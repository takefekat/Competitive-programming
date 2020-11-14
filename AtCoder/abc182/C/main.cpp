#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

void solve(string N)
{
    vecll cnt(3, 0);
    ll sum = 0;
    for (ll i = 0; i < N.size(); i++)
    {
        string c = N.substr(i, 1);
        ll x = stol(c);
        cnt[x % 3]++;
        sum += x;
    }
    ll ans = 3;
    for (ll i = 0; i <= cnt[2]; i++)
    {
        for (ll j = 0; j <= cnt[1]; j++)
        {
            for (ll k = 0; k <= cnt[0]; k++)
            {
                if ((sum - i * 2 - j) % 3 == 0 and i + j + k != cnt[0] + cnt[1] + cnt[2])
                {
                    ans = min(ans, i + j + k);
                }
            }
        }
    }
    if (ans == 3)
        ans = -1;
    cout << ans << endl;
}

signed main()
{
    string s;
    cin >> s;
    solve(s);
    return 0;
}
