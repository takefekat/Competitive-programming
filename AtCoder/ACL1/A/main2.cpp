#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<vector<ll>> graph;

struct UnionFind
{
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(int N) : par(N)
    { //最初は全てが根であるとして初期化
        for (int i = 0; i < N; i++)
            par[i] = i;
    }

    int root(int x)
    { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x)
            return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y)
    {                     // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry)
            return;   //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(int x, int y)
    { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main()
{
    // in
    ll N;
    cin >> N;
    vector<ll> x(N), y(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
    }

    //solve
    UnionFind uf(N);
    for (ll k = 0; k < N; k++)
    {
        for (ll i = 0; i < N; i++)
        {
            if (x[i] < x[k] and y[i] < y[k])
            {
                uf.unite(i, k);
            }
            if (x[i] > x[k] and y[i] > y[k])
            {
                uf.unite(i, k);
            }
        }
    }

    for (ll i = 0; i < N; i++)
    {
        ll ans = 0;
        for (ll j = 0; j < N; j++)
        {
            if (uf.same(i, j))
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}