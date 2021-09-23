#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;

ll wu(const string& A, const string& B) {
    const ll M = A.size();
    const ll N = B.size();
    if (M > N) return wu(B, A);

    vll V(M + N + 1, 0);
    const ll offset = M;
    const ll Delta = N - M;

    for (ll P = 0; P <= M; P++) {
        // k = Δ より下の領域
        for (ll k = -P; k < Delta; k++) {
            ll i = (P == 0 ? (k == 0 ? 0 : V[offset + k - 1])
                           : (k == -P
                                  ? V[offset + k + 1] + 1
                                  : max(V[offset + k + 1], V[offset + k - 1])));
            // 斜めの辺が存在すれば行き止まりまで進む
            while (i < M and i + k < N and A[i] == B[i + k]) i++;
            V[offset + k] = i;
        }

        // k = Δ より上の領域
        for (ll k = Delta + P; k > Delta; k--) {
            ll i = (k == Delta + P
                        ? V[offset + k - 1]
                        : max(V[offset + k + 1] + 1, V[offset + k - 1]));
            while (i < M and i + k < N and A[i] == B[i + k]) i++;
            V[offset + k] = i;
        }

        // k = Δ
        const ll k = Delta;
        ll i = (P == 0 ? (k == 0 ? 0 : V[offset + k - 1])
                       : max(V[offset + k + 1] + 1, V[offset + k - 1]));
        while (i < M and i + k < N and A[i] == B[i + k]) i++;

        // 右下に辿り着いたら終了
        if (i == M) {
            // D = Δ + 2 P
            return Delta + 2 * P;
        }
        V[offset + k] = i;
    }
    return -1;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    ll ans = wu(s1, s2);
    cout << ans << endl;
    return 0;
}