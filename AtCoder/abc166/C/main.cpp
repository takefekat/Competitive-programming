#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, long long M, std::vector<long long> H, std::vector<long long> A, std::vector<long long> B)
{
    vector<ll> ans(N, 0);
    for (ll i = 0; i < M; i++)
    {
        if (H[A[i] - 1] <= H[B[i] - 1])
            ans[A[i] - 1] = -1;
        if (H[B[i] - 1] <= H[A[i] - 1])
            ans[B[i] - 1] = -1;
    }
    ll res = 0;
    for (ll i = 0; i < N; i++)
    {
        res += (ans[i] == 0 ? 1 : 0);
    }
    cout << res << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> H(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &H[i]);
    }
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for (int i = 0; i < M; i++)
    {
        scanf("%lld", &A[i]);
        scanf("%lld", &B[i]);
    }
    solve(N, M, std::move(H), std::move(A), std::move(B));
    return 0;
}
