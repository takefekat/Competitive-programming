#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(std::string S) {
    stack<string> st;
    for(ll i = 0; i < S.size(); i++) {
        if(st.size() == 0) {
            st.push(S.substr(i, 1));
        } else {
            if(st.top() != S.substr(i, 1)) {
                st.pop();
            } else {
                st.push(S.substr(i, 1));
            }
        }
    }
    cout << S.size() - st.size() << endl;
}

int main() {
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
