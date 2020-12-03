#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

vvll d(200, vll(200, INT_MAX));

void warshall_floyd(int n)
{
    for (int k = 0; k < n; k++)
    { // 経由する頂点
        for (int i = 0; i < n; i++)
        { // 始点
            for (int j = 0; j < n; j++)
            { // 終点
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

void solve(long long a, long long b, long long x, long long y)
{

    for (ll i = 0; i < 100; i++)
    {
        d[i][100 + i] = x;
        d[100 + i][i] = x;
        if (i != 0)
        {
            d[i][100 + i - 1] = x;
            d[100 + i - 1][i] = x;
            d[i][i - 1] = y;
            d[i - 1][i] = y;
        }
    }
    warshall_floyd(200);
    cout << d[a - 1][100 + b - 1] << endl;
}

signed main()
{
    long long a;
    scanf("%lld", &a);
    long long b;
    scanf("%lld", &b);
    long long x;
    scanf("%lld", &x);
    long long y;
    scanf("%lld", &y);
    solve(a, b, x, y);
    return 0;
}
