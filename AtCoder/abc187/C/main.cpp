#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<std::string> S) {
    map<string, ll> m;
    string ans = "satisfiable";

    for (ll i = 0; i < N; i++) {
        string e = S[i];
        if (e[0] == '!') {
            e = e.substr(1, e.size() - 1);
            if (m.find(e) == m.end()) m[e] = 0;
            if ((m[e] & 2) == 0) m[e] += 2;
        } else {
            if (m.find(e) == m.end()) m[e] = 0;
            if ((m[e] & 1) == 0) m[e] += 1;
        }
    }
    for (auto &&e : m) {
        if (e.second == 3) ans = e.first;
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<std::string> S(N);
    for (int i = 0; i < N; i++) {
        std::cin >> S[i];
    }
    solve(N, std::move(S));
    return 0;
}
