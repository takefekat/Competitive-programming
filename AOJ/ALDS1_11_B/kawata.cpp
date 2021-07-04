#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL << 60;  // 十分大きな値に
typedef long long ll;
typedef long double ld;

using Graph = vector<vector<ll>>;
vector<bool> seen;
vector<ll> d, f;
ll cnt = 1;
void rec(const Graph &G, ll v) {
    seen[v] = true;
    for (auto next_v : G[v]) {
        if (seen[next_v]) {
            continue;
        }
        // 初めての訪問なら、最初の発見時刻を追加
        d[next_v] = cnt;
        cnt++;
        rec(G, next_v);
    }
    f[v] = cnt;  // vの隣接リストを調べ終えた時刻
    
}

int main() {
    ll N;
    cin >> N;
    // vector<ll> d(N, 0), f(N, 0);
    Graph G(N);

    // グラフの受け取り
    for (ll i = 0; i < N; i++) {
        ll u, k;
        cin >> u >> k;
        for (ll j = 0; j < k; j++) {
            ll v;
            cin >> v;
            G[u - 1].push_back(v - 1);  // Graphは0スタートなので
        }
    }

    // 探索
    seen.assign(N, false);  // 初期状態ではすべての頂点が未訪問
    d.assign(N, 0);
    f.assign(N, 0);

    ll v = 0;  // v=0がスタート

    rec(G, v);

    for (ll v = 0; v < N; v++) {
        cout << v + 1 << " " << d[v] << " " << f[v] << endl;
    }
}
