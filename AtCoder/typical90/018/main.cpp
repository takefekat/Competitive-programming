#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ld dist_3d_p2p(ld ax, ld ay, ld az, ld bx, ld by, ld bz) {
    return sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by) +
                (az - bz) * (az - bz));
}

void solve(long long T, long long L, long long X, long long Y, long long Q,
           std::vector<long long> E) {
    for (ll i = 0; i < Q; i++) {
        ld ax = 0;
        ld ay = -(ld)L / 2 * sin(E[i] * 2 * M_PI / T);
        ld az = (ld)L / 2 * (1 - cos(E[i] * 2 * M_PI / T));

        ld bx = 0;
        ld by = ay;
        ld bz = 0;

        ld a = dist_3d_p2p(bx, by, bz, X, Y, 0);
        ld ans = atan(az / a);
        printf("%.12Lf\n", ans * 360 / 2 / M_PI);
    }
}

int main() {
    // printf("%.10Lf\n", atan(1 / sqrt(2)));

    long long T;
    std::scanf("%lld", &T);
    long long L;
    std::scanf("%lld", &L);
    long long X;
    std::scanf("%lld", &X);
    long long Y;
    std::scanf("%lld", &Y);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> E(Q);
    for (int i = 0; i < Q; i++) {
        std::scanf("%lld", &E[i]);
    }
    solve(T, L, X, Y, Q, std::move(E));
    return 0;
}
