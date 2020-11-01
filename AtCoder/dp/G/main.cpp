#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<ll> vec;
typedef vector<vec> graph;

vec topological(graph &g)
{
    const ll N = g.size();
    vec in_deg(N, 0);

    for (ll i = 0; i < N; i++)
    {
        for (auto &&v : g[i])
        {
            in_deg[v]++;
        }
    }
    stack<ll> zero;
    for (ll i = 0; i < N; i++)
    {
        if (in_deg[i] == 0)
            zero.push(i);
    }
    vec res;
    while (zero.size())
    {
        ll u = zero.top();
        zero.pop();
        res.push_back(u);
        for (auto &&v : g[u])
        {
            in_deg[v]--;
            if (in_deg[v] == 0)
                zero.push(v);
        }
    }
    return res;
}

void solve(long long N, long long M, graph &g, std::vector<long long> x, std::vector<long long> y)
{
    vec top = topological(g);

    vec dp(N, 0);
    for (auto &&u : top)
    {
        for (auto &&v : g[u])
        {
            dp[v] = max(dp[v], dp[u] + 1);
        }
    }
    ll ans = 0;
    for (auto &&e : dp)
    {
        ans = max(ans, e);
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> x(M);
    std::vector<long long> y(M);
    graph g(N);
    for (int i = 0; i < M; i++)
    {
        scanf("%lld", &x[i]);
        scanf("%lld", &y[i]);
        x[i]--;
        y[i]--;
        g[x[i]].push_back(y[i]);
    }

    solve(N, M, g, std::move(x), std::move(y));
    return 0;
}
