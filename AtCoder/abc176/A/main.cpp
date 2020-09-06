#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, long long X, long long T)
{

    ll ans;
    if (N % X == 0)
        ans = N / X * T;

    else
    {
        ans = (N / X + 1) * T;
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long X;
    scanf("%lld", &X);
    long long T;
    scanf("%lld", &T);
    solve(N, X, T);
    return 0;
}
