#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct Point {
    ll x;
    ll y;
    ll idx;
    Point(ll x, ll y, ll idx) : x(x), y(y), idx(idx) {}
    bool operator<(const Point& p) const {
        return (x == p.x ? y < p.y : x < p.x);
    }
};

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

    for (auto&& edge : e) {
        if (uf.same(edge.s, edge.t)) continue;
        res += edge.w;
        uf.unite(edge.s, edge.t);
    }

    return res;
}

void solve(long long N, std::vector<Point>& xy, std::vector<Point>& yx) {
    sort(xy.begin(), xy.end());
    sort(yx.begin(), yx.end());

    vector<Edge> e;
    for (ll i = 0; i < N - 1; i++) {
        e.push_back(
            Edge(xy[i].idx, xy[i + 1].idx,
                 min(abs(xy[i].x - xy[i + 1].x), abs(xy[i].y - xy[i + 1].y))));
        e.push_back(
            Edge(xy[i + 1].idx, xy[i].idx,
                 min(abs(xy[i].x - xy[i + 1].x), abs(xy[i].y - xy[i + 1].y))));
        e.push_back(
            Edge(yx[i].idx, yx[i + 1].idx,
                 min(abs(yx[i].x - yx[i + 1].x), abs(yx[i].y - yx[i + 1].y))));
        e.push_back(
            Edge(yx[i + 1].idx, yx[i].idx,
                 min(abs(yx[i].x - yx[i + 1].x), abs(yx[i].y - yx[i + 1].y))));
    }

    ll ans = kruskal(N, e);
    cout << ans << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<Point> xy;
    std::vector<Point> yx;
    for (int i = 0; i < N; i++) {
        ll a, b;
        std::scanf("%lld", &a);
        std::scanf("%lld", &b);
        xy.push_back(Point(a, b, i));
        yx.push_back(Point(b, a, i));
    }
    solve(N, xy, yx);
    return 0;
}
