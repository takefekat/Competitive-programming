#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

signed main()
{

    ll N;
    cin >> N;

    vecll a(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    ll ans_i = -1;
    for (ll i = 2; i <= 1000; i++)
    {
        ll res = 0;
        for (ll j = 0; j < N; j++)
        {
            if (a[j] % i == 0)
                res++;
        }
        if (ans < res)
        {
            ans = res;
            ans_i = i;
        }
    }
    cout << ans_i << endl;

    return 0;
}
