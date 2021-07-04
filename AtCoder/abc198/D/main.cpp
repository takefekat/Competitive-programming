#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

map<char, int> m;
vector<char> ch;
set<int> used;

bool is_ok(vector<string> &S) {
    vector<int> x(3);
    for (ll i = 0; i < 3; i++) {
        ll tmp = 0;
        for (ll j = 0; j < S[i].size(); j++) {
            if (j == 0 and m[S[i][j]] == 0 and S[i].size() != 1) return false;

            tmp += m[S[i][j]];
            if (j != S[i].size() - 1) tmp *= 10;
        }
        x[i] = tmp;
    }
    if (x[0] + x[1] == x[2])
        return true;
    else
        return false;
}

bool check(vector<string> &S) {
    ll keta = min(S[0].size(), S[1].size());
    ll c = 0;
    for (ll i = 0; i < keta; i++) {
        if (m[S[0][S[0].size() - 1 - i]] != -1 and
            m[S[1][S[1].size() - 1 - i]] != -1 and
            m[S[2][S[2].size() - 1 - i]] != -1) {
            if ((m[S[0][S[0].size() - 1 - i]] + m[S[1][S[1].size() - 1 - i]] +
                 c) %
                    10 !=
                m[S[2][S[2].size() - 1 - i]]) {
                return false;
            } else {
                c = (m[S[0][S[0].size() - 1 - i]] +
                     m[S[1][S[1].size() - 1 - i]]) /
                    10;
            }
        } else {
            return true;
        }
    }
    return true;
}

bool dfs(vector<string> &S, ll idx) {
    if (idx == ch.size()) {
        if (is_ok(S))
            return true;
        else
            return false;
    }

    for (ll i = 0; i < 10; i++) {
        if (used.find(i) == used.end()) {
            used.insert(i);
            m[ch[idx]] = i;
            if (dfs(S, idx + 1)) return true;
            m[ch[idx]] = -1;
            used.erase(i);
        }
    }
    return false;
}

void solve(std::vector<std::string> S) {
    m.clear();
    ch.clear();
    used.clear();

    set<char> tmp;
    for (ll i = 0; i < 12; i++) {
        if (tmp.find(S[0][S[0].size() - 1 - i]) == tmp.end() and
            S[0].size() - 1 >= i) {
            ch.push_back(S[0][S[0].size() - 1 - i]);
            tmp.insert(S[0][S[0].size() - 1 - i]);
        }
        if (tmp.find(S[1][S[1].size() - 1 - i]) == tmp.end() and
            S[1].size() - 1 >= i) {
            ch.push_back(S[1][S[1].size() - 1 - i]);
            tmp.insert(S[1][S[1].size() - 1 - i]);
        }
        if (tmp.find(S[2][S[2].size() - 1 - i]) == tmp.end() and
            S[2].size() - 1 >= i) {
            ch.push_back(S[2][S[2].size() - 1 - i]);
            tmp.insert(S[2][S[2].size() - 1 - i]);
        }
    }

    for (auto &&s : S) {
        for (auto &&e : s) {
            if (m.find(e) == m.end()) {
                m[e] = -1;
            }
        }
    }
    if (ch.size() > 10) {
        cout << "UNSOLVABLE" << endl;
        return;
    }

    if (max(S[0].size(), S[1].size()) > S[2].size()) {
        cout << "UNSOLVABLE" << endl;
        return;
    }

    if (dfs(S, 0)) {
        for (ll i = 0; i < 3; i++) {
            ll tmp = 0;
            for (ll j = 0; j < S[i].size(); j++) {
                tmp += m[S[i][j]];
                if (j != S[i].size() - 1) tmp *= 10;
            }
            cout << tmp << endl;
        }

    } else {
        cout << "UNSOLVABLE" << endl;
    }
}

int main() {
    std::vector<std::string> S(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> S[i];
    }
    solve(std::move(S));
    return 0;
}
