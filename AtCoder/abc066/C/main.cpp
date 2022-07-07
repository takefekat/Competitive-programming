#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long n, std::vector<long long> a) {
    deque<int> dq;
    for(ll i = 0; i < n; i++) {
        if(i % 2) {
            dq.push_back(a[i]);
        } else {
            dq.push_front(a[i]);
        }
    }
    if(n % 2 == 0) reverse(dq.begin(), dq.end());
    for(int i = 0; i < n; i++) {
        cout << dq[i] << (i == n - 1 ? "\n" : " ");
    }
}

int main() {
    long long n;
    std::scanf("%lld", &n);
    std::vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        std::scanf("%lld", &a[i]);
    }
    solve(n, std::move(a));
    return 0;
}
