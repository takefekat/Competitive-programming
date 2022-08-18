#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long N, std::vector<std::string> S) {
    map<string, ll> s_cnt;
    for(auto&& s : S) {
        if(s_cnt.find(s) == s_cnt.end()) {
            s_cnt[s] = 1;
            cout << s << endl;
        } else {
            cout << s << "(" << s_cnt[s] << ")" << endl;
            s_cnt[s]++;
        }
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::string> S(N);
    for(int i = 0; i < N; i++) {
        std::cin >> S[i];
    }
    solve(N, std::move(S));
    return 0;
}
