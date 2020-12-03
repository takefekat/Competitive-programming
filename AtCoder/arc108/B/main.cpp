#include <bits/stdc++.h>
using namespace std;
typedef int ll;

void solve(int N, std::string s)
{
    string t;
    for (ll i = 0; i < N; i++)
    {
        t += s.substr(i, 1);

        if (t.size() >= 3)
        {
            if (t.substr(t.size() - 3) == "fox")
            {
                t.pop_back();
                t.pop_back();
                t.pop_back();
            }
        }
    }
    cout << t.size() << endl;
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
