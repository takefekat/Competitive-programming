#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long W, std::vector<long long> S, std::vector<long long> T, std::vector<long long> P)
{
    vecll Yu((200020), 0);

    for (ll i = 0; i < N; i++)
    {
        Yu[S[i]] += P[i];
        Yu[T[i]] -= P[i];
    }
    for (ll i = 1; i < Yu.size(); i++)
    {
        Yu[i] += Yu[i - 1];
    }

    string ans = YES;
    for (ll i = 0; i < Yu.size(); i++)
    {
        if (Yu[i] > W)
        {
            ans = NO;
        }
    }
    cout << ans << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long W;
    scanf("%lld", &W);
    std::vector<long long> S(N);
    std::vector<long long> T(N);
    std::vector<long long> P(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &S[i]);
        scanf("%lld", &T[i]);
        scanf("%lld", &P[i]);
    }
    solve(N, W, std::move(S), std::move(T), std::move(P));
    return 0;
}
