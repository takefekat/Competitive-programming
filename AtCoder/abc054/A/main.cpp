#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long A, long long B)
{
    if (A == 1)
        A = 14;
    if (B == 1)
        B = 14;
    if (A > B)
        cout << "Alice" << endl;
    if (A < B)
        cout << "Bob" << endl;
    if (A == B)
        cout << "Draw" << endl;
}

signed main()
{
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    solve(A, B);
    return 0;
}
