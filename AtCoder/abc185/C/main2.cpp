#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAXN = 1010;
ll P[MAXN][MAXN] = {};
void partition()
{
    for (ll k = 0; k < MAXN; k++)
        P[0][k] = 1;
    for (ll n = 1; n < MAXN; n++)
    {
        for (ll k = 1; k < MAXN; k++)
        {
            P[n][k] += P[n][k - 1] + (n - k >= 0 ? P[n - k][k] : 0);
        }
    }
}

void solve(long long L)
{
    partition();
    cout << P[L][12] << endl;
}

signed main()
{
    long long L;
    scanf("%lld", &L);
    solve(L);
    return 0;
}
