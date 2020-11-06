#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<long long> x, std::vector<long long> y)
{
    string ans = NO;
    for (ll i = 0; i < N; i++)
    {
        for (ll j = i + 1; j < N; j++)
        {
            for (ll k = j + 1; k < N; k++)
            {

                if ((y[k] - y[i]) * (x[j] - x[i]) == (y[j] - y[i]) * (x[k] - x[i]))
                {
                    ans = YES;
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
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &x[i]);
        scanf("%lld", &y[i]);
    }
    solve(N, std::move(x), std::move(y));
    return 0;
}
