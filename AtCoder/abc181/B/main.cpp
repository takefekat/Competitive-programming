#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, std::vector<long long> A, std::vector<long long> B)
{

    ll ans = 0;
    for (ll i = 0; i < N; i++)
    {
        ans += (A[i] + B[i]) * (B[i] - A[i] + 1) / 2;
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        scanf("%lld", &B[i]);
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
