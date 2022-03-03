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

void solve(std::string S)
{
    string ans;
    if (S[2] == S[3] and S[4] == S[5])
        ans = YES;
    else
        ans = NO;
    cout << ans << endl;
}

int main()
{
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
