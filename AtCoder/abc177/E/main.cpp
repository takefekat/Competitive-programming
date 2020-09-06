#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check_pairwize(long long N, std::vector<long long> &A, multiset<int> &s)
{
    // pairwize coprimeの確認
    for (ll i = 2; i <= A[N - 1] / 2; i++)
    {
        if (i == 2 or i % 2 == 1)
        {
            ll cnt = 0;
            for (ll j = 1; i * j <= A[N - 1]; j++)
            {
                cnt += s.count(i * j);
            }
            if (cnt > 1)
            {
                return false;
            }
        }
    }
    return true;
}

bool check_setwize(long long N, std::vector<long long> &A, multiset<int> &s)
{
    // setwize coprimeの確認
    ll res = A[0];
    for (ll i = 1; i < N; i++)
    {
        res = gcd(res, A[i]);
    }
    if (res != 1)
    {
        return false;
    }
    return true;
}

void solve(long long N, std::vector<long long> A)
{

    multiset<int> s;
    sort(A.begin(), A.end());
    for (auto &&e : A)
    {
        s.insert(e);
    }
    assert(A.size() == s.size());

    string ans;
    if (check_pairwize(N, A, s))
    {
        ans = "pairwise coprime";
    }
    else if (check_setwize(N, A, s))
    {
        ans = "setwise coprime";
    }
    else
    {
        ans = "not coprime";
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
