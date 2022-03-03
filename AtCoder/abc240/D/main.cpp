#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using pll = pair<ll, ll>;

void solve(long long N, std::vector<long long> a) {
    stack<pll> st;
    st.push({-1, 0});
    ll sum = 0;
    for(ll i = 0; i < N; i++) {
        sum++;
        if(st.top().first == a[i]) {
            st.top().second++;
            if(st.top().first == st.top().second) {
                sum -= st.top().second;
                st.pop();
            }
        } else {
            st.push({a[i], 1});
        }
        cout << sum << endl;
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> a(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
