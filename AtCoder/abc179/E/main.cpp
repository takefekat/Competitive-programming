#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// modint: mod 計算を int を扱うように扱える構造体

void solve(long long N, long long X, long long M)
{

    ll ans = X;
    ll An = X;

    for (ll i = 0; i < N - 1; i++)
    {
        An = An * An % M;
        ans += An;
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long X;
    scanf("%lld", &X);
    ll M;
    scanf("%lld", &M);
    solve(N, X, M);
    return 0;
}
