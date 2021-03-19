#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

class UnionFind {
   private:
   public:
    std::vector<int> par;  // 親
    std::vector<int> sz;   // サイズ

    UnionFind(int n) : par(n, -1), sz(n, 1) {}  // 初期化: O(n)

    int root(int x) {  // 木の根を求める: O(α(n))
        if (par[x] == -1) return x;
        return par[x] = root(par[x]);  // 親を辿りながら根に付け替える
    }

    bool unite(int x, int y) {  // x,yを含む集合を結合: O(α(n))
        x = root(x);
        y = root(y);
        if (x == y) return false;

        if (sz[x] < sz[y]) swap(x, y);

        par[y] = x;
        sz[x] += sz[y];
        return true;
    }

    bool issame(int x, int y) {  // x,yが同じ集合に含まれるかどうか: O(α(n))
        return root(x) == root(y);
    }

    int size(int x) { return sz[root(x)]; }
};

void solve(long long N, long long M, std::vector<long long> A,
           std::vector<long long> B) {
    UnionFind uf(N);

    vector<ll> ans(M, 0);
    ans[M - 1] = N * (N - 1) / 2;
    for (ll i = M - 2; i >= 0; i--) {
        ans[i] = ans[i + 1];
        if (!uf.issame(A[i + 1], B[i + 1]))
            ans[i] -= uf.size(A[i + 1]) * uf.size(B[i + 1]);
        uf.unite(A[i + 1], B[i + 1]);
    }
    for (ll i = 0; i < M; i++) {
        cout << ans[i] << endl;
    }
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for (int i = 0; i < M; i++) {
        scanf("%lld", &A[i]);
        A[i]--;
        scanf("%lld", &B[i]);
        B[i]--;
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
