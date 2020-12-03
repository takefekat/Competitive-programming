#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, long long X, std::string S)
{
    for (auto &&c : S)
    {
        if (c == 'o')
            X++;
        else
            X = max(X - 1, (ll)0);
    }
    cout << X << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    long long X;
    scanf("%lld", &X);
    std::string S;
    std::cin >> S;
    solve(N, X, S);
    return 0;
}
