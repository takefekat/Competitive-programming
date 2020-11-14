#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

void solve(ll N, vecll &a)
{

    vecll sum(N, 0);
    sum[0] = a[0];

    for (ll i = 1; i < N; i++)
    {
        sum[i] = a[i] + sum[i - 1];
    }

    ll ans = 0;
    ll sumsum = 0;
    ll plus_max = 0;

    for (ll i = 0; i < N; i++) // i回実施した後の最大値
    {
        plus_max = max(plus_max, sum[i]);
        ans = max(ans, sumsum + plus_max);

        sumsum += sum[i];
        ans = max(ans, sumsum);
    }
    cout << ans << endl;
}

signed main()
{
    ll N;
    cin >> N;
    vecll a(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    solve(N, a);
    return 0;
}
