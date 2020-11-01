#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N)
{
    N %= 10;
    string ans;
    if (N == 3)
        ans = "bon";
    else if (N == 0 or N == 1 or N == 6 or N == 8)
        ans = "pon";
    else
        ans = "hon";
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    solve(N);
    return 0;
}
