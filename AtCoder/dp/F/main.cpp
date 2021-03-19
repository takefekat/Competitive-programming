#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

template <class T>
void chmax(T& a, T b) {
    if (a < b) a = b;
}

int main() {
    // 入力
    string s, t;
    cin >> s >> t;
    ll S = s.size(), T = t.size();

    // dp[i][j]：sのi文字目までと、tのj文字目までのLCS
    vvll dp(S + 1, vll(T + 1, -1));
    dp[0][0] = 0;

    // バックトラック用変数
    vector<vector<pair<int, int>>> back(
        S + 1, vector<pair<int, int>>(T + 1, {-1, -1}));

    // dp更新
    for (ll i = 0; i < S + 1; i++) {
        for (ll j = 0; j < T + 1; j++) {
            // 縦
            if (i < S) {
                if (dp[i + 1][j] < dp[i][j]) {
                    chmax(dp[i + 1][j], dp[i][j]);
                    back[i + 1][j] = {i, j};
                }
            }
            // 横
            if (j < T) {
                if (dp[i][j + 1] < dp[i][j]) {
                    chmax(dp[i][j + 1], dp[i][j]);
                    back[i][j + 1] = {i, j};
                }
            }
            // 斜め
            if (i < S and j < T) {
                if (s[i] == t[j]) {
                    if (dp[i + 1][j + 1] < dp[i][j] + 1) {
                        chmax(dp[i + 1][j + 1], dp[i][j] + 1);
                        back[i + 1][j + 1] = {i, j};
                    }
                } else {
                    if (dp[i + 1][j + 1] < dp[i][j] + 1) {
                        chmax(dp[i + 1][j + 1], dp[i][j]);
                        back[i + 1][j + 1] = {i, j};
                    }
                }
            }
        }
    }

    // バックトラックで解の復元
    string ans;
    ll ci = S, cj = T;
    while (back[ci][cj] != pair<int, int>(-1, -1)) {
        int ni = back[ci][cj].first;
        int nj = back[ci][cj].second;
        // 斜め遷移して、かつdpの値が1変わるときにansに追加
        if (dp[ni][nj] + 1 == dp[ci][cj] and ni + 1 == ci and nj + 1 == cj)
            ans += s.substr(ni, 1);
        ci = ni;
        cj = nj;
    }
    //逆順なので元に戻す

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}