#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(std::string S, std::string T)
{
    string ans = "No";
    if (S == T.substr(0, T.size() - 1))
    {
        ans = "Yes";
    }
    cout << ans << endl;
}

signed main()
{
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    solve(S, T);
    return 0;
}
