#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> p) {
    set<ll> s;
    s.insert(0);
    for (ll i = 0; i < N; i++) {
        set<ll> tmp(s);
        for (auto &&e : s) {
            tmp.insert(e + p[i]);
        }
        swap(s, tmp);
    }
    cout << s.size() << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> p(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &p[i]);
    }
    solve(N, std::move(p));
    return 0;
}
