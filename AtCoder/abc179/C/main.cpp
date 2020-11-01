#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N)
{

    ll ans = 0;
    for (ll A = 1; A <= N; A++)
    {
        for (ll B = 1; A * B < N; B++)
        {
            ll C = N - A * B;
            ans++;
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
