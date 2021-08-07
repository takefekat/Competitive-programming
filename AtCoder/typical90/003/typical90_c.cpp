#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL << 60;  // 十分大きな値に
typedef long long ll;
typedef long double ld;
#include <queue>

using Graph = vector<vector<ll>>;

// 入力: グラフGと探索の始点s
// 出力: sから各頂点への最短路長を表す配列
// 幅優先探索!!!
vector<ll> bfs(const Graph &G, ll s) {
    ll N = (ll)G.size();     // 頂点数
    vector<ll> dist(N, -1);  // 全頂点「未訪問」に初期化
    queue<ll> que;

    // 初期条件（頂点sを初期頂点)
    dist[s] = 0;
    que.push(s);

    // bfs開始(キューが空になるまで探索を行う)
    while (!que.empty()) {
        ll v = que.front();  // キューから先頭頂点を取り出す
        que.pop();

        // vからたどれる頂点をすべて調べる
        for (ll x : G[v]) {
            if (dist[x] != -1) continue;  // 発見済の頂点は探索しない

            // 新たな未探索頂点xについて距離情報を更新してキューに挿入
            dist[x] = dist[v] + 1;
            que.push(x);
        }
    }
    return dist;
}

int main() {
    ll n;
    cin >> n;
    Graph G(n);  // G[a]はAからいける都市を表す //
    for (ll i = 0; i < n - 1; i++) {
        ll a, b;
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
        G[b - 1].push_back(a - 1);
    }
    vector<ll> d = bfs(G, 0);
    ll max_d = 0, idx = -1;
    for (ll i = 0; i < n; i++) {
        if (max_d < d[i]) {
            max_d = d[i];
            idx = i;
        }
    }
    d = bfs(G, idx);
    ll ans = *max_element(d.begin(), d.end());
    cout << ans + 1 << endl;

    /*
    // すべての頂点を始点sとしたbfsを行う
    ll max_d = 0;
    ll max_s;
    ll max_t;

    for (ll s=0; s<n; s++) {
        // 頂点sを始点としてbfs
        vector<ll> dist = bfs(G, s);
        ll max_d_tmp = 0;
        ll max_t_tmp;
        for (ll i=0; i<n; i++) {
           if (dist[i]>max_d_tmp) {
               max_d_tmp = dist[i];
               max_t_tmp = i;
           }
        }
        if (max_d_tmp > max_d ) {
            max_d = max_d_tmp;
            max_t = max_t_tmp;
        }
    }

    // max_tを始点にして最も遠い場所を探す
    vector<ll> dist = bfs(G, max_t);
    ll max_d_2 = 0;
    for (ll i=0; i<n; i++) {
        if (dist[i] > max_d_2) {
            max_d_2 = dist[i];
        }
    }

    cout << max_d + max_d_2 + 1 << endl;
    */
}