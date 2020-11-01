#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<ll> vecll;

void solve(long long N, long long K, std::vector<long long> A)
{

    ll u = 0, v, cycle = -1, ans = -1;
    vecll used(N, -1);
    used[u] = 0;
    while (1)
    {
        K--;
        v = A[u];
        if (K == 0)
        {
            ans = v;
            break;
        }
        if (used[v] != -1)
        {
            cycle = used[u] - used[v] + 1;
            u = v;
            break;
        }
        used[v] = used[u] + 1;
        u = v;
    }
    if (ans == -1)
    {
        K %= cycle;
        for (ll i = 0; i < K; i++)
        {
            u = A[u];
        }
        ans = u;
    }
    cout << ans + 1 << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        A[i]--;
    }
    solve(N, K, std::move(A));
    return 0;
}
