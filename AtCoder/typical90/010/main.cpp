#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, std::vector<long long> C, std::vector<long long> P,
           long long Q, std::vector<long long> L, std::vector<long long> R) {
    vll one(P), two(P);
    for (ll i = 0; i < N; i++) {
        if (C[i] == 1)
            two[i] = 0;
        else
            one[i] = 0;
    }
    vll sumone(N + 1, 0), sumtwo(N + 1, 0);
    for (ll i = 0; i < N; i++) {
        sumone[i + 1] = sumone[i] + one[i];
        sumtwo[i + 1] = sumtwo[i] + two[i];
    }

    for (ll i = 0; i < Q; i++) {
        printf("%Ld %Ld\n", sumone[R[i]] - sumone[L[i] - 1],
               sumtwo[R[i]] - sumtwo[L[i] - 1]);
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> C(N);
    std::vector<long long> P(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &C[i]);
        std::scanf("%lld", &P[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    for (int i = 0; i < Q; i++) {
        std::scanf("%lld", &L[i]);
        std::scanf("%lld", &R[i]);
    }
    solve(N, std::move(C), std::move(P), Q, std::move(L), std::move(R));
    return 0;
}
