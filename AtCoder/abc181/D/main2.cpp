#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

const string YES = "Yes";
const string NO = "No";

void solve(string S)
{
    set<string> eight;
    for (ll i = 8; i < 1000; i += 8)
    {

        if (i < 10)
        {
            eight.insert(string("00") + to_string(i));
        }
        else if (i < 100)
        {
            eight.insert(string("0") + to_string(i));
        }
        else
        {
            eight.insert(to_string(i));
        }
    }
    vecll cnt(10, 0);
    for (auto &&c : S)
    {
        cnt[c - '0']++;
        if (S.size() == 1)
            cnt[0] += 2;
        else if (S.size() == 2)
            cnt[0]++;
    }

    string ans = YES;
    for (auto &&str : eight)
    {
        vecll tgt(10, 0);
        for (auto &&c : str)
        {
            tgt[c - '0']++;
        }
        for (ll i = 0; i < 10; i++)
        {
            if (cnt[i] < tgt[i])
            {
                ans = NO;
                continue;
            }
        }
        if (ans == YES)
        {
            break;
        }
    }
    cout << ans << endl;
    //cout << eight.count(string("432")) << endl;
}

signed main()
{
    string S;
    cin >> S;
    solve(S);
    return 0;
}
