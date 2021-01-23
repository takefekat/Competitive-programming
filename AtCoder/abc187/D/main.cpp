#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

typedef pair<ll, ll> pll;
struct xxx {
    ll a;
    ll b;
    ll toku;
    ll index;
    bool operator<(const xxx& x) const { return toku < x.toku; }
};

void solve(long long N, std::vector<long long> A, std::vector<long long> B) {
    vector<xxx> p(N);
    for (ll i = 0; i < N; i++) {
        p[i] = {A[i], B[i], 2 * A[i] + B[i], i};
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());

    vll sum(N + 1, 0);
    for (ll i = N - 1; i >= 0; i--) {
        sum[i] = p[i].a;
        if (i != N - 1) sum[i] += sum[i + 1];
    }

    ll takahashi = 0;

    for (ll i = 0; i < N; i++) {
        takahashi += p[i].a + p[i].b;
        if (takahashi > sum[i + 1]) {
            cout << i + 1 << endl;
            break;
        }
    }
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
        scanf("%lld", &B[i]);
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
