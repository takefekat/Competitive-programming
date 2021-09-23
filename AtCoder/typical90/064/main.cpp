#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long N, long long Q, std::vector<long long> A,
           std::vector<long long> L, std::vector<long long> R,
           std::vector<long long> V) {
    vll dh(N - 1, 0);
    ll ans = 0;
    for (ll i = 0; i < N - 1; i++) {
        dh[i] = A[i + 1] - A[i];
        ans += abs(dh[i]);
    }

    for (ll i = 0; i < Q; i++) {
        if (L[i] > 0) {
            // 順加算
            if ((V[i] >= 0 and dh[L[i] - 1] >= 0) or
                (V[i] < 0 and dh[L[i] - 1] < 0))
                ans += abs(V[i]);
            // 逆方向
            else {
                if (abs(dh[L[i] - 1]) >= abs(V[i]))
                    ans -= abs(V[i]);  // |V[i]|減る
                else
                    ans += (abs(V[i]) - 2 * abs(dh[L[i] - 1]));
            }
            dh[L[i] - 1] += V[i];
        }
        if (R[i] < N - 1) {
            // 順加算
            if ((V[i] >= 0 and dh[R[i]] < 0) or (V[i] < 0 and dh[R[i]] >= 0))
                ans += abs(V[i]);
            // 逆方向
            else {
                if (abs(dh[R[i]]) >= abs(V[i]))
                    ans -= abs(V[i]);  //|V[i|減る
                else
                    ans += (abs(V[i]) - 2 * abs(dh[R[i]]));
            }
            dh[R[i]] -= V[i];
        }
        cout << ans << endl;
        for (auto &&e : dh) {
            // cout << e << " ";
        }
        // cout << endl;
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    std::vector<long long> V(Q);
    for (int i = 0; i < Q; i++) {
        std::scanf("%lld", &L[i]);
        L[i]--;
        std::scanf("%lld", &R[i]);
        R[i]--;
        std::scanf("%lld", &V[i]);
    }
    solve(N, Q, std::move(A), std::move(L), std::move(R), std::move(V));
    return 0;
}
