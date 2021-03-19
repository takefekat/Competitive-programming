#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

class UnionFind {
   private:
   public:
    std::vector<int> par;  // 親
    std::vector<int> sz;   // ランク

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

void solve(long long N, long long M, std::vector<long long> a,
           std::vector<long long> b) {
    ll ans = 0;
    for (ll i = 0; i < M; i++) {
        UnionFind uf(N);
        for (ll j = 0; j < M; j++) {
            if (i == j) continue;
            uf.unite(a[j], b[j]);
        }
        if (!uf.issame(a[i], b[i])) ans++;
    }
    cout << ans << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long M;
    scanf("%lld", &M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    for (int i = 0; i < M; i++) {
        scanf("%lld", &a[i]);
        a[i]--;
        scanf("%lld", &b[i]);
        b[i]--;
    }
    solve(N, M, std::move(a), std::move(b));
    return 0;
}
