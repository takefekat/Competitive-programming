#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long S, long long P)
{

    long double tmp = sqrt(S * S - 4 * P);
    long double M = (S + tmp) / 2;
    double N = S - M;
    M = (ll)M;
    N = (ll)N;
    if (M * M - S * M + P == 0 and N * N - N * S + P == 0 and tmp * tmp == S * S - 4 * P)
        cout << YES << endl;
    else
    {
        tmp = sqrt(S * S - 4 * P);
        M = (S - tmp) / 2;
        N = S - M;
        M = (ll)M;
        N = (ll)N;
        if (M * M - S * M + P == 0 and N * N - N * S + P == 0 and tmp * tmp == S * S - 4 * P)
            cout << YES << endl;
        else
            cout << NO << endl;
    }
}

signed main()
{
    long long S;
    scanf("%lld", &S);
    long long P;
    scanf("%lld", &P);
    solve(S, P);
    return 0;
}
