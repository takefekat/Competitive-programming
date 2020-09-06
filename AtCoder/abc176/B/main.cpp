#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(std::string N)
{
    string ans;
    ll sum = 0;
    for (auto &&e : N)
    {
        sum += e - '0';
    }
    if (sum % 9 == 0)
        ans = "Yes";
    else
    {
        ans = "No";
    }
    cout << ans << endl;
}

signed main()
{
    std::string N;
    std::cin >> N;
    solve(N);
    return 0;
}
