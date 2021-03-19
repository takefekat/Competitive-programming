#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using ld = long double;
using vld = vector<ld>;
using vvld = vector<vld>;

class UnionFind {
   public:
    std::vector<int> par;   // 親
    std::vector<int> rank;  // ランク

    UnionFind(int n) {  // 初期化: O(n)
        par = rank = std::vector<int>(n);
        for (int i = 0; i < n; i++) {
            par[i] = i;
            rank[0] = 0;
        }
    }

    int root(int x) {  // 木の根を求める: O(α(n))
        if (par[x] == x) return x;
        return par[x] = root(par[x]);  // 親を辿りながら根に付け替える
    }

    void unite(int x, int y) {  // x,yを含む集合を結合: O(α(n))
        x = root(x);
        y = root(y);
        if (x == y) return;

        if (rank[x] < rank[y])
            par[x] = y;
        else {
            par[y] = x;
            if (rank[x] == rank[y]) rank[x]++;
        }
    }

    bool same(int x, int y) {  // x,yが同じ集合に含まれるかどうか: O(α(n))
        return root(x) == root(y);
    }
};

int main() {
    ll n, m;
    cin >> n >> m;
    UnionFind uf(n);
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        uf.unite(a, b);
    }

    ll x;
    cin >> x;
    for (ll i = 0; i < x; i++) {
        ll a, b;
        cin >> a >> b;
        cout << (uf.same(a, b) ? "yes" : "no") << endl;
    }
}