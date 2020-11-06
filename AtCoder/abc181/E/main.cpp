#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

void solve(long long N, long long M, std::vector<long long> H, std::vector<long long> W)
{
    sort(H.begin(), H.end());
    sort(W.begin(), W.end());
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
    std::vector<long long> W(M);
    for (int i = 0; i < M; i++)
    {
        scanf("%lld", &W[i]);
    }
    solve(N, M, std::move(H), std::move(W));
    return 0;
}
