#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long A, long long B, long long C, long long K)
{
    ll ans = 0;
    ans += min(A, K);
    K -= A;
    //ans += min(B, max(0LL, K));
    K -= B;
    ans += (-1 * min(C, max(0LL, K)));
    K -= C;
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
    long long K;
    scanf("%lld", &K);
    solve(A, B, C, K);
    return 0;
}
