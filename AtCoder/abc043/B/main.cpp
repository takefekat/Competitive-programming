#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(std::string s) {
    stack<string> st;
    for(auto&& c : s) {
        if(c == '0' || c == '1') {
            st.push(string(c));
        } else {
            st.pop()
        }
    }
}

int main() {
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
