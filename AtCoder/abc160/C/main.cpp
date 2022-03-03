#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long K, long long N, std::vector<long long> A)
{
    vll dif;
    for (ll i = 0; i < N - 1; i++)
    {
        dif.push_back(A[i + 1] - A[i]);
    }
    dif.push_back(A[0] + K - A[N - 1]);
    sort(all(dif));

    ll ans = 0;
    for (ll i = 0; i < N - 1; i++)
    {
        ans += dif[i];
    }
    cout << ans << endl;
}

int main()
{
    long long K;
    std::scanf("%lld", &K);
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        std::scanf("%lld", &A[i]);
    }
    solve(K, N, std::move(A));
    return 0;
}
