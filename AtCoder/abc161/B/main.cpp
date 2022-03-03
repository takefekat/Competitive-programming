#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, std::vector<long long> A)
{
    sort(all(A));
    reverse(all(A));
    ll sum = 0;
    for (auto e : A)
        sum += e;
    ll ans = 0;
    for (auto e : A)
    {
        if (e * 4 * M >= sum)
            ans++;
    }
    if (ans >= M)
        cout << YES << endl;
    else
        cout << NO << endl;
}

int main()
{
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        std::scanf("%lld", &A[i]);
    }
    solve(N, M, std::move(A));
    return 0;
}
