#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
const string YES = "Yes";
const string NO = "No";

void pm(ll &p, ll &m, string ps, vector<string> &res)
{
    p++;
    m--;
    res.push_back(ps);
}

void solve(long long N, long long A, long long B, long long C, std::vector<std::string> str)
{
    // OUTの可能性あり: 1 1 0, N 0 0
    // 小さい方に++する
    // ただし、1 1 0 で ABの時
    //  AB連続して偶数回、AC,BC->どっちでも良い
    //  AB連続して奇数回、AC->A++, BC->B++
    vector<string> res;
    string ans = YES;

    vll sum(N);
    for (ll i = N - 1; i >= 0; i--)
    {
        if (str[i] == str[i + 1])
            sum[i] = sum[i + 1] + 1;
    }

    for (ll i = 0; i < N; i++)
    {
        string s = str[i];
        if (s == "AB")
        {
            if (A > B)
                pm(B, A, "B", res);
            else if (B > A)
                pm(A, B, "A", res);
            else
            {
                if (sum[i] % 2 == 0)
                {
                    if (i + sum[i] + 1 < N and str[i + sum[i] + 1] == "AC")
                        pm(A, B, "A", res);
                    else
                        pm(B, A, "B", res);
                }
                else
                    pm(A, B, "A", res);
            }
        }
        if (s == "AC")
        {
            if (A > C)
                pm(C, A, "C", res);
            else if (C > A)
                pm(A, C, "A", res);
            else
            {
                if (sum[i] % 2 == 0)
                {
                    if (i + sum[i] + 1 < N and str[i + sum[i] + 1] == "AB")
                        pm(A, C, "A", res);
                    else
                        pm(C, A, "C", res);
                }
                else
                    pm(A, C, "A", res);
            }
        }
        if (s == "BC")
        {
            if (C > B)
                pm(B, C, "B", res);
            else if (B > C)
                pm(C, B, "C", res);
            else
            {
                if (sum[i] % 2 == 0)
                {
                    if (i + sum[i] + 1 < N and str[i + sum[i] + 1] == "AC")
                        pm(C, B, "C", res);
                    else
                        pm(B, C, "B", res);
                }
                else
                    pm(C, B, "C", res);
            }
        }
        if (A < 0 or B < 0 or C < 0)
            ans = NO;
    }
    cout << ans << endl;
    if (ans == YES)
        for (auto &&e : res)
        {
            cout << e << endl;
        }
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long C;
    scanf("%lld", &C);
    std::vector<std::string> s(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> s[i];
    }
    solve(N, A, B, C, std::move(s));
    return 0;
}
