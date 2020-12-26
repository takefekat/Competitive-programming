#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(ll N, ll M, ll X, vll &c, vvll &a)
{
    ll ans = 1e+9;
    for (ll bitset = 0; bitset < (1 << N); bitset++) // 2^N
    {
        // 選んだ本の組合せに対して、理解度の和と、値段の和を求める
        vll rikai(M, 0);
        ll cost = 0;
        for (ll book = 0; book < N; book++) // N
        {
            //【要注意】 "!="よりも"&"の方が優先順位が高いので、"!="の前にカッコがないと死ぬ
            if ((bitset & (1 << book)) != 0)
            {
                for (ll alg = 0; alg < M; alg++) // M
                {
                    rikai[alg] += a[book][alg];
                }
                cost += c[book];
            }
        }

        // 理解度が全てXを超える場合、costの最小値を求める
        bool res = true;
        for (ll alg = 0; alg < M; alg++)
            if (rikai[alg] < X)
                res = false;
        if (res)
            ans = min(ans, cost);
    }
    ans = (ans == 1e+9 ? -1 : ans);
    cout << ans << endl;
}

signed main()
{
    ll N, M, X;
    cin >> N >> M >> X;

    vll c(N);
    vvll a(N, vll(M));

    for (ll i = 0; i < N; i++)
    {
        cin >> c[i];
        for (ll j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }
    solve(N, M, X, c, a);
    return 0;
}
