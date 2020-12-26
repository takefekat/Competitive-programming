#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_dec(ll x)
{
    while (x != 0)
    {
        if (x % 10 == 7)
        {
            return true;
        }
        x /= 10;
    }
    return false;
}

bool is_oct(ll x)
{
    while (x != 0)
    {
        if (x % 8 == 7)
        {
            return true;
        }
        x /= 8;
    }
    return false;
}

void solve(long long N)
{

    
    ll ans = 0;
    for (ll i = 1; i <= N; i++)
    {

        if (is_dec(i))
            ans++;
        else if (is_oct(i))
            ans++;
    }
    cout << N - ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
