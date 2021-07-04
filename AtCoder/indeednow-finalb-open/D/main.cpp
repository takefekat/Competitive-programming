#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

class UnionFind {
   private:
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

struct Edge {
    ll s, t, w;
    Edge(ll s, ll t, ll w) : s(s), t(t), w(w) {}
    bool operator<(const Edge& e) const { return w < e.w; }
};

ll kruskal(ll V, vector<Edge>& e) {
    ll res = 0;
    UnionFind uf(V);
    sort(e.begin(), e.end());
    reverse(e.begin(), e.end());

    for (auto&& edge : e) {
        if (uf.same(edge.s, edge.t)) continue;
        res += edge.w;
        uf.unite(edge.s, edge.t);
    }

    return res;
}

void solve(long long H, long long W, long long S_x, long long S_y,
           long long G_x, long long G_y,
           std::vector<std::vector<long long>> P) {
    vector<Edge> edges;

    ll ans = 0;
    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            if (i != H - 1) {
                edges.push_back(
                    Edge(i * W + j, (i + 1) * W + j, P[i][j] * P[i + 1][j]));
                edges.push_back(
                    Edge((i + 1) * W + j, i * W + j, P[i][j] * P[i + 1][j]));
            }
            if (j != W - 1) {
                edges.push_back(
                    Edge(i * W + j, i * W + (j + 1), P[i][j] * P[i][j + 1]));
                edges.push_back(
                    Edge(i * W + (j + 1), i * W + j, P[i][j] * P[i][j + 1]));
            }
            ans += P[i][j];
        }
    }

    ans += kruskal(H * W, edges);
    cout << ans << endl;
}
int main() {
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    long long S_x;
    std::scanf("%lld", &S_x);
    S_x--;
    long long S_y;
    std::scanf("%lld", &S_y);
    S_y--;
    long long G_x;
    std::scanf("%lld", &G_x);
    G_x--;
    long long G_y;
    std::scanf("%lld", &G_y);
    G_y--;
    std::vector<std::vector<long long>> P(H, std::vector<long long>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::scanf("%lld", &P[i][j]);
        }
    }
    solve(H, W, S_x, S_y, G_x, G_y, std::move(P));
    return 0;
}
