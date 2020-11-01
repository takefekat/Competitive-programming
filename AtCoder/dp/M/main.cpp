#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const long long MOD = 1000000007;

void solve(long long N, long long K, std::vector<long long> a)
{
    // N個の区別できる箱にK個の石を入れる組合せは何通りか？
    // i番目の箱には、a[i]個まで入れることができる
    // N<=100, K<=10^5, a[i]<=K
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }
    solve(N, K, std::move(a));
    return 0;
}
