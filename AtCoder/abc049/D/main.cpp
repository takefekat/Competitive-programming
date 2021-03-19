#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;

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

void solve(long long N, long long K, long long L, std::vector<long long> p,
           std::vector<long long> q, std::vector<long long> r,
           std::vector<long long> s) {
    UnionFind uf_road(N), uf_train(N);
    for (ll i = 0; i < K; i++) uf_road.unite(p[i] - 1, q[i] - 1);
    for (ll i = 0; i < L; i++) uf_train.unite(r[i] - 1, s[i] - 1);

    map<pll, ll> m;  // road.root(i)とtrain.root(i)の組合せの数を数える。
    // 全ての頂点について、ペアを辞書に突っ込む（1を足す）
    for (ll i = 0; i < N; i++) {
        if (m.find(pll(uf_road.root(i), uf_train.root(i))) ==
            m.end()) {  // (road.root(i),train.root(i))があるか検索
            m[pll(uf_road.root(i), uf_train.root(i))] = 1;
        } else
            m[pll(uf_road.root(i), uf_train.root(i))]++;
    }

    // 各頂点について、同じペアの数を出力する。
    for (ll i = 0; i < N; i++) {
        cout << m[pll(uf_road.root(i), uf_train.root(i))];
        if (i == N - 1)
            cout << endl;
        else
            cout << " ";
    }
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    long long L;
    scanf("%lld", &L);
    std::vector<long long> p(K);
    std::vector<long long> q(K);
    for (int i = 0; i < K; i++) {
        scanf("%lld", &p[i]);
        scanf("%lld", &q[i]);
    }
    std::vector<long long> r(L);
    std::vector<long long> s(L);
    for (int i = 0; i < L; i++) {
        scanf("%lld", &r[i]);
        scanf("%lld", &s[i]);
    }
    solve(N, K, L, std::move(p), std::move(q), std::move(r), std::move(s));
    return 0;
}
