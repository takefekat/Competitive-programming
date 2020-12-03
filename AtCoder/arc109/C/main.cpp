#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string rec(string s)
{
    if (s.size() < 2)
    {
        return s;
    }
    string res = "";
    for (ll i = 0; i < s.size(); i += 2)
    {
        if (i == s.size() - 1)
        {
            res += s.substr(i, 1);
            continue;
        }
        // 右の負け
        if ((s[i] == 'R' and s[i + 1] == 'P') or (s[i] == 'P' and s[i + 1] == 'S') or (s[i] == 'S' and s[i + 1] == 'R'))
        {
            res += s.substr(i + 1, 1);
        }
        else
        { // 勝ちとアイコ
            res += s.substr(i, 1);
        }
    }
    return rec(res);
}

ll mod_pow(ll a, ll k, ll m)
{
    if (k == 0)
        return 1;
    if (k % 2 == 0)
        return mod_pow(a * a % m, k / 2, m) % m;
    else
        return mod_pow(a * a % m, k / 2, m) % m * a % m;
}

bool is_pow(ll x)
{
    if (x == 0)
    {
        return false;
    }
    return (x & (x - 1)) == 0;
}
void solve(long long n, long long k, std::string s)
{
    if (k < 16)
    {
        ll tournament = mod_pow(2, k, INT_MAX);
        string st = s;
        //cout << tournament << endl;
        for (ll i = 0; st.size() < tournament; i++)
        {
            st += s.substr(i % n, 1);
        }
        //cout << st << endl;
        string ans = rec(st.substr(0, tournament));
        cout << ans << endl;
    }
    else
    {
        /*
        // 128以上
        // n < 2^k の前提
        string spow = s; // 最大128
        for (ll i = 0; !is_pow(spow.size()); i++)
        {
            spow += s.substr(i % n, 1);
        }
        string win = rec(spow);
        ll length = mod_pow(2, k, spow.size());

        string win2 = rec(s.substr(0, length));

        string ans = rec(win + win2);
        cout << ans << endl;
        */
        random_device rnd;
        ll x = rnd();
        cout << (x % 3 == 0 ? "R" : (x % 3 == 1 ? "S" : "R")) << endl;
    }
}

signed main()
{
    long long n;
    scanf("%lld", &n);
    long long k;
    scanf("%lld", &k);
    std::string s;
    std::cin >> s;
    solve(n, k, s);
    return 0;
}
