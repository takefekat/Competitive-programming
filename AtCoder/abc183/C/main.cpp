#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

ll rec(long long N, long long K, std::vector<std::vector<long long>> &T, ll used, ll u, ll cost)
{
    used |= (1 << u);
    if (used == pow(2, N) - 1)
    {
        if (cost + T[u][0] == K)
            return 1;
        else
            return 0;
    }

    ll ans = 0;
    for (ll i = 0; i < N; i++)
    {
        if ((used & (1 << i)) == 0)
        {
            ans += rec(N, K, T, used, i, cost + T[u][i]);
        }
    }
    return ans;
}

void solve(long long N, long long K, std::vector<std::vector<long long>> T)
{
    vecll used(N, 0);
    ll ans = rec(N, K, T, 0, 0, 0);
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<std::vector<long long>> T(N, std::vector<long long>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%lld", &T[i][j]);
        }
    }
    solve(N, K, std::move(T));
    return 0;
}
