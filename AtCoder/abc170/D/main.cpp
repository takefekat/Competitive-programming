#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, std::vector<long long> A)
{
    map<ll, ll> s;
    ll ans = N;
    ll amax = 0;
    set<ll> used;
    for (auto &&e : A)
    {
        s[e] += 1;
        amax = max(amax, e);
    }
    for (auto &&e : A)
    {
        bool res = true;
        for (ll i = 1; e * i <= amax; i++)
        {
            if (i == 1 and s[e] > 1)
            {
                ans--;
            }
            else
            {
                if (s.find(e * i) != s.end())
                {
                    if (used.count(e * i) == 0)
                    {
                        ans -= s[e * i];
                        used.insert(e * i);
                    }
                }
            }
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
