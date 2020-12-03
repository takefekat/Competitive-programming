#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, std::vector<std::string> A, std::vector<std::string> B)
{

    bool res = true;
    for (ll i = 0; i < N; i++)
    {
        for (ll j = 0; j < N; j++)
        {
            // (i,j)を左端として一致するか
            res = true;
            if (i + M - 1 < N and j + M - 1 < N)
            {
                for (ll k = 0; k < M; k++)
                {
                    for (ll l = 0; l < M; l++)
                    {
                        if (A[i + k][j + l] != B[k][l])
                        {
                            res = false;
                        }
                    }
                }
                if (res)
                {
                    cout << YES << endl;
                    return;
                }
            }
        }
    }
    cout << NO << endl;
    return;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<std::string> A(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }
    std::vector<std::string> B(M);
    for (int i = 0; i < M; i++)
    {
        std::cin >> B[i];
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
