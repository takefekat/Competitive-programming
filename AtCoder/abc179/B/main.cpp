#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<std::vector<long long>> D)
{

    string ans = "No";
    ll cnt = 0;
    for (ll i = 0; i < N; i++)
    {
        if (D[i][0] == D[i][1])
        {
            cnt++;
            if (cnt == 3)
            {
                ans = "Yes";
                break;
            }
        }

        else
        {
            cnt = 0;
        }
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<std::vector<long long>> D(N, std::vector<long long>(2));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%lld", &D[i][j]);
        }
    }
    solve(N, std::move(D));
    return 0;
}
