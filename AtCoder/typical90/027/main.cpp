#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<std::string> S) {
    set<string> ss;

    for (ll i = 0; i < N; i++) {
        if (ss.find(S[i]) == ss.end()) {
            printf("%d\n", i + 1);
            ss.insert(S[i]);
        }
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::string> S(N);
    for (int i = 0; i < N; i++) {
        std::cin >> S[i];
    }
    solve(N, std::move(S));
    return 0;
}
