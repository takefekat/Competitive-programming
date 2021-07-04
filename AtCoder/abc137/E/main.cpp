#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct Edge {
    ll to;
    ll w;
    Edge(ll to, ll w) : to(to), w(w) {}
};
using Graph = vector<vector<Edge>>;

void solve(long long N, long long M, long long P, std::vector<long long> a,
           std::vector<long long> b, std::vector<long long> c) {
    Graph g(N);
    for (ll i = 0; i < M; i++) {
        g[a[i] - 1].push_back(Edge(b[i] - 1, -(c[i] - P)));
    }

    vll score(N, (1LL << 60));
    score[0] = 0;
    for (ll i = 0; i <= N; i++) {
        bool update = false;
        for (ll v = 0; v < N; v++) {
            if (score[v] == (1LL << 60)) continue;
            for (auto &&e : g[v]) {
                if (score[e.to] > score[v] + e.w) {
                    if (e.to == N - 1) update = true;
                    score[e.to] = score[v] + e.w;
                }
            }
        }

        if (update == true and i == N) {
            cout << -1 << endl;
            return;
        }
    }
    cout << max(0LL, -score[N - 1]) << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    long long P;
    scanf("%lld", &P);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    std::vector<long long> C(M);
    for (int i = 0; i < M; i++) {
        scanf("%lld", &A[i]);
        scanf("%lld", &B[i]);
        scanf("%lld", &C[i]);
    }
    solve(N, M, P, std::move(A), std::move(B), std::move(C));
    return 0;
}
