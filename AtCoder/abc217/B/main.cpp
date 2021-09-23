#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(std::vector<std::string> S) {
    set<string> s = {"ABC", "ARC", "AGC", "AHC"};
    for (auto &&e : S) {
        s.erase(e);
    }
    cout << *(s.begin()) << endl;
    ;
}

int main() {
    std::vector<std::string> S(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> S[i];
    }
    solve(std::move(S));
    return 0;
}
