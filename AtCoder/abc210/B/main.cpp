#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::string S) {
    for (ll i = 0; i < N; i++) {
        if (S[i] == '1') {
            if (i % 2 == 0)
                cout << "Takahashi\n";
            else
                cout << "Aoki\n";
            break;
        }
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::string S;
    std::cin >> S;
    solve(N, S);
    return 0;
}
