#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long K)
{
    vll lunlun;

    vvll memo(10);
    for (ll i = 0; i < 10; i++)
    {
        memo[i].push_back(i);
        if (i != 0)
        {
            lunlun.push_back(i);
        }
    }

    ll base = 1;

    while (lunlun.size() < K)
    {
        base *= 10;
        vvll next(10);
        for (ll i = 0; i < 10; i++)
        {
            if (i == 0)
            {
                for (ll k = 0; k <= 1; k++)
                {
                    for (auto &&e : memo[k])
                    {
                        next[i].push_back(base * i + e);
                        // lunlun.push_back(base * i + e);
                    }
                }
            }
            else if (i == 9)
            {
                for (ll k = 8; k <= 9; k++)
                {
                    for (auto &&e : memo[k])
                    {
                        next[i].push_back(base * i + e);
                        lunlun.push_back(base * i + e);
                    }
                }
            }
            else
            {
                for (ll k = i - 1; k <= i + 1; k++)
                {
                    for (auto &&e : memo[k])
                    {
                        next[i].push_back(base * i + e);
                        lunlun.push_back(base * i + e);
                    }
                }
            }
        }
        memo = move(next);
    }

    sort(all(lunlun));
    cout << lunlun[K - 1] << endl;
}

int main()
{
    long long K;
    std::scanf("%lld", &K);
    solve(K);
    return 0;
}
