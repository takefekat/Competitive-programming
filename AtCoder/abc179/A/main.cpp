#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(std::string S)
{
    cout << S;
    if (S[S.size() - 1] == 's')
        cout << "es" << endl;
    else
        cout << "s" << endl;
}

signed main()
{
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
