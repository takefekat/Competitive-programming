#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long X)
{
    for (ll A = -1000; A <= 1000; A++)
    {
        for (ll B = -1000; B <= 1000; B++)
        {
            if (A * A * A * A * A - B * B * B * B * B == X)
            {
                cout << A << " " << B << endl;
                return;
            }
        }
    }
}

signed main()
{
    long long X;
    scanf("%lld", &X);
    solve(X);
    return 0;
}
