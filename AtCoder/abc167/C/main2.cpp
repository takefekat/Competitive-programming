#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

ll search(ll N, ll M, ll X, vecll &c, vector<vecll> &a)
{
    ll res = INT_MAX;
    ll N_pow = pow(2, N);
    for (ll i = 0; i <= N_pow; i++)
    {
        vecll sum_a(M, 0);
        ll sumc = 0;
        for (ll j = 1; j < pow(2, N); j = (j << 1))
        {
            if ((i & j) != 0)
            {
                ll index = log2(j);
                sumc += c[index];
                for (ll k = 0; k < M; k++)
                {
                    sum_a[k] += a[index][k];
                }
            }
        }
        bool ok = true;
        for (ll j = 0; j < M; j++)
        {
            if (sum_a[j] < X)
            {
                ok = false;
            }
        }
        if (ok)
        {
            res = min(res, sumc);
        }
    }
    if (res == INT_MAX)
    {
        res = -1;
    }
    return res;
}

signed main()
{
    // Failed to predict input format

    ll N, M, X;
    cin >> N >> M >> X;
    vecll c(N);
    vector<vecll> a(N, vecll(M));
    for (ll i = 0; i < N; i++)
    {
        cin >> c[i];
        for (ll j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }
    ll ans = search(N, M, X, c, a);
    cout << ans << endl;

    return 0;
}
