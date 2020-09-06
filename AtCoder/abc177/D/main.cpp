#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<vector<ll>> graph;

ll dfs(ll u, graph &g, vector<bool> &used)
{
    if (used[u] == true)
        return 1;
    used[u] = true;

    ll res = 1;
    for (auto &&v : g[u])
    {
        if (used[v] == false)
        {
            res += dfs(v, g, used);
        }
    }
    return res;
}

void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B)
{

    graph g = graph(N);
    for (ll i = 0; i < M; i++)
    {
        g[A[i]].push_back(B[i]);
        g[B[i]].push_back(A[i]);
    }
    vector<bool> used(N, false);
    ll size_max = 0;

    for (ll i = 0; i < N; i++)
    {
        size_max = max(size_max, dfs(i, g, used));
    }
    cout << size_max << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for (int i = 0; i < M; i++)
    {
        scanf("%lld", &A[i]);
        A[i]--;
        scanf("%lld", &B[i]);
        B[i]--;
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
