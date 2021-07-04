#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long T, std::vector<long long> case_) {
    for (ll i = 0; i < T; i++) {
        if (case_[i] & 1)
            printf("Odd\n");
        else if (case_[i] % 4 == 0)
            printf("Even\n");
        else
            printf("Same\n");
    }
}

int main() {
    long long T;
    scanf("%lld", &T);
    std::vector<long long> case_(T);
    for (int i = 0; i < T; i++) {
        scanf("%lld", &case_[i]);
    }
    solve(T, std::move(case_));
    return 0;
}
