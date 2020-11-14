#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

void solve(long long N, std::vector<long long> A)
{

    map<ll, ll> plus, minus;

    for (ll i = 0; i < N; i++)
    {
        if (plus.find(A[i] + i + 1) == plus.end())
            plus[A[i] + i + 1] = 1;
        else
            plus[A[i] + i + 1]++;
        if (minus.find(i + 1 - A[i]) == minus.end())
            minus[i + 1 - A[i]] = 1;
        else
            minus[i + 1 - A[i]]++;
    }

    ll ans = 0;
    for (auto &&p : plus)
    {
        if (minus.find(p.first) != minus.end())
        {
            ans += minus[p.first] * p.second;
        }
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
