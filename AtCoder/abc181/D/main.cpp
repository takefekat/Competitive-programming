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
        eight.insert(to_string(i)); // 3桁の8の倍数を全列挙
    }

    vecll cnt(10, 0);
    for (auto &&c : S)
    {
        cnt[c - '0']++; // 0はない。
    }

    string ans = YES;
    for (auto &&str : eight) // strがSから作れるか判定
    {
        vecll tgt(10, 0);
        for (auto &&c : str)
        {
            tgt[c - '0']++;
        }
        if (tgt[0] > 0)
            continue; // 0を含むものが答えになることはない
        ans = YES;
        if (str.size() < 3)
        {
            if (str.size() != S.size())
                continue;
        }
        for (ll i = 0; i < 10; i++)
        {
            if (cnt[i] < tgt[i])
            {
                ans = NO;
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
