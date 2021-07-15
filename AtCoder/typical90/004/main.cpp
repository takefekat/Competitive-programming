#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long H, long long W, std::vector<std::vector<long long>> A) {
    vll tate(H, 0);
    vll yoko(W, 0);
    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            tate[i] += A[i][j];
            yoko[j] += A[i][j];
        }
    }

    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            printf("%lld", tate[i] + yoko[j] - A[i][j]);
            if (j == W - 1)
                printf("\n");
            else
                printf(" ");
        }
    }
}

int main() {
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    std::vector<std::vector<long long>> A(H, std::vector<long long>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(H, W, std::move(A));
    return 0;
}
