#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b)
{

    vvll graph(N, vll(N, 0));
    for (ll i = 0; i < M; i++)
    {
        graph[a[i] - 1][b[i] - 1] = 1;
        graph[b[i] - 1][a[i] - 1] = 1;
    }

    vll p(N);
    for (ll i = 0; i < N; i++)
    {
        p[i] = i;
    }

    ll ans = 0;

    do
    {
        bool is = true;
        if (p[0] != 0)
            break;
        for (ll i = 0; i < N - 1; i++)
        {
            if (graph[p[i]][p[i + 1]] == 0)
            {
                is = false;
                break;
            }
        }
        if (is)
            ans++;
    } while (next_permutation(p.begin(), p.end()));
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    for (int i = 0; i < M; i++)
    {
        scanf("%lld", &a[i]);
        scanf("%lld", &b[i]);
    }
    solve(N, M, std::move(a), std::move(b));
    return 0;
}
