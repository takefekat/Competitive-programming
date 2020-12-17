#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, long long M, std::vector<long long> A)
{

    ll sum = 0;
    for (ll i = 0; i < M; i++)
    {
        sum += A[i];
    }
    cout << max((ll)-1, N - sum) << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> A(M);
    for (int i = 0; i < M; i++)
    {
        scanf("%lld", &A[i]);
    }
    solve(N, M, std::move(A));
    return 0;
}
