#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, std::vector<long long> A)
{
    ll ans = 0;
    ll max_ = A[0];
    for (ll i = 1; i < A.size(); i++)
    {
        if (max_ > A[i])
        {
            ans += max_ - A[i];
        }
        max_ = max(A[i], max_);
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
