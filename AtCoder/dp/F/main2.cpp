#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;

void solve(std::string s, std::string t)
{
    ll N = s.size();
    ll M = t.size();
    vector<vec> dp(N + 1, vec(M + 1, -1e+18));
    vector<vector<pair<ll, ll>>> back(N + 1, vector<pair<ll, ll>>(M + 1, pair<ll, ll>(-1, -1)));
    dp[0][0] = 0;
    for (ll i = 0; i <= N; i++)
    {
        for (ll j = 0; j <= M; j++)
        {
            if (i + 1 <= N and dp[i + 1][j] < dp[i][j])
            {
                dp[i + 1][j] = dp[i][j];
                back[i + 1][j] = {i, j};
            }
            if (j + 1 <= M and dp[i][j + 1] < dp[i][j])
            {
                dp[i][j + 1] = dp[i][j];
                back[i][j + 1] = {i, j};
            }
            if (i + 1 <= N and j + 1 <= M and s[i] == t[j])
            {
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
                back[i + 1][j + 1] = {i, j};
            }
        }
    }

    // Back Track
    string ans;
    ll ci = N;
    ll cj = M;
    while (dp[ci][cj] != 0)
    {
        pair<ll, ll> b = back[ci][cj];
        ll pi = b.first;
        ll pj = b.second;
        if (dp[ci][cj] == dp[pi][pj] + 1)
        {
            ans = s.substr(ci - 1, 1) + ans;
        }
        ci = pi;
        cj = pj;
    }
    cout << ans << endl;
}

signed main()
{
    std::string s;
    std::cin >> s;
    std::string t;
    std::cin >> t;
    solve(s, t);
    return 0;
}
