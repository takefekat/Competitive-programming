#include <bits/stdc++.h>
#define rep(X, Y) for (int(X) = 0; (X) < (int)(Y); ++(X))

using namespace std;

int main()
{
    char win[222][222];
    win['R']['R'] = win['R']['S'] = win['S']['R'] = 'R';
    win['S']['S'] = win['S']['P'] = win['P']['S'] = 'S';
    win['P']['P'] = win['P']['R'] = win['R']['P'] = 'P';

    int n, m;
    string s;
    cin >> n >> m >> s;
    while (m--)
    {
        const auto t = s + s;
        rep(i, n) s[i] = win[t[i * 2]][t[i * 2 + 1]];
        cout << s << endl;
        }
    cout << s[0] << endl;
    return 0;
}
