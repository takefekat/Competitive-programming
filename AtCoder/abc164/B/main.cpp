#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long A, long long B, long long C, long long D)
{

    string ans;
    while (1)
    {
        C -= B;
        if (C <= 0)
        {
            ans = YES;
            break;
        }
        A -= D;
        if (A <= 0)
        {
            ans = NO;
            break;
        }
    }
    cout << ans << endl;
}

signed main()
{
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long C;
    scanf("%lld", &C);
    long long D;
    scanf("%lld", &D);
    solve(A, B, C, D);
    return 0;
}
