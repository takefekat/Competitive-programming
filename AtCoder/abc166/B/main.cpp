#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main()
{
    ll N, K;
    cin >> N >> K;

    vector<ll> snuke(N, 0);
    for (ll i = 0; i < K; i++)
    {
        ll d;
        cin >> d;
        for (ll j = 0; j < d; j++)
        {
            ll x;
            cin >> x;
            snuke[x - 1]++;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < N; i++)
    {
        if (snuke[i] == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
