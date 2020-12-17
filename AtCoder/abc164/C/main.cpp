#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, std::vector<std::string> S)
{

    set<string> se;
    for (auto &&e : S)
    {
        se.insert(e);
    }
    cout << se.size() << endl;
}

signed main()
{
    long long N;
    scanf("%lld", &N);
    std::vector<std::string> S(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> S[i];
    }
    solve(N, std::move(S));
    return 0;
}
