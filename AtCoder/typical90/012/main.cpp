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

const string YES = "Yes";
const string NO = "No";

ll dx[] = {1, 0, -1, 0};
ll dy[] = {0, 1, 0, -1};

int main() {
    ll H, W, Q;
    cin >> H >> W >> Q;

    vvll m(H, vll(W, 0));
    UnionFind uf(H * W);

    for (ll i = 0; i < Q; i++) {
        ll t;
        scanf("%lld", &t);
        if (t == 1) {
            ll r, c;
            scanf("%lld %lld", &r, &c);
            r--;
            c--;
            m[r][c] = 1;
            for (ll j = 0; j < 4; j++) {
                ll idy = r + dy[j];
                ll idx = c + dx[j];
                if (idy < 0 or idy >= H or idx < 0 or idx >= W) continue;
                if (m[idy][idx] == 1) uf.unite(r * W + c, idy * W + idx);
            }

        } else {
            ll ra, ca, rb, cb;
            scanf("%lld %lld %lld %lld", &ra, &ca, &rb, &cb);
            ra--;
            ca--;
            rb--;
            cb--;
            if (m[ra][ca] == 1 and m[rb][cb] == 1 and
                uf.same(ra * W + ca, rb * W + cb))
                cout << YES << endl;
            else
                cout << NO << endl;
        }
    }

    return 0;
}
