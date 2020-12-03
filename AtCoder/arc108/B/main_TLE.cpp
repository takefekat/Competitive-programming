#include <bits/stdc++.h>
using namespace std;
typedef int ll;

void solve(int N, std::string s)
{

    list<string> lastf;
    ll index = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'f' or i == s.size() - 1)
        {
            string tmp = s.substr(index, i - index + 1);
            lastf.emplace_back(tmp);
            index = i + 1;
        }
    }
    ll ans = s.size();
    bool is_change = true;
    while (is_change)
    {
        is_change = false;
        for (auto ite = lastf.begin(); ite != lastf.end();)
        {
            if (ite == lastf.begin())
            {
                ite++;
                continue;
            }
            if ((*ite)[0] == 'o' and (*ite)[1] == 'x')
            {
                --ite;
                (*ite).pop_back();
                *(--ite) += (*(++ite)).substr(2);

                ++ite;
                ite = lastf.erase(ite);

                is_change = true;
                ans -= 3;
            }
            else
            {
                ++ite;
            }
        }
    }
    cout << ans << endl;
}

signed main()
{
    int N;
    scanf("%lld", &N);
    std::string s;
    std::cin >> s;
    solve(N, s);
    return 0;
}
