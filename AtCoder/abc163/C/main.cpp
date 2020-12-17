#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, std::vector<long long> A)
{

    vector<ll> ans(N, 0);
    for (auto &&e : A)
    {
        ans[e - 1]++;
    }
    for (auto &&e : ans)
    {
        cout << e << endl;
    }
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N - 2 + 1);
    for (int i = 0; i < N - 2 + 1; i++)
    {
        scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
