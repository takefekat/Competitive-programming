#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const ll INF = 1LL << 60;
using state = tuple<ll, ll>;

const ll dh[] = {-1, 0, 1, 0};
const ll dw[] = {0, -1, 0, 1};

int main() {
    ll H, W;
    cin >> H >> W;
    vector<string> ma(H);
    for (ll i = 0; i < H; i++) cin >> ma[i];

    deque<state> q;
    q.push_front(state(0, 0));

    vvll dist(H, vll(W, INF));
    dist[0][0] = 0;
    while (q.size()) {
        auto [h, w] = q.front();
        q.pop_front();

        // 歩いて移動する
        for (ll i = 0; i < 4; i++) {
            ll h_n = h + dh[i];
            ll w_n = w + dw[i];

            // 場外
            if (h_n < 0 or H <= h_n or w_n < 0 or W <= w_n) continue;
            // 壁
            if (ma[h_n][w_n] == '#') continue;
            if (dist[h_n][w_n] <= dist[h][w]) continue;

            dist[h_n][w_n] = dist[h][w];
            q.push_front(state(h_n, w_n));
        }

        // パンチで壁壊して移動する場合
        for (ll i = -2; i <= 2; i++) {
            for (ll j = -2; j <= 2; j++) {
                // パンチでいけない距離
                if (abs(i) == 2 and abs(j) == 2) continue;
                // 移動しない
                if (i == 0 and j == 0) continue;

                ll h_n = h + i;
                ll w_n = w + j;
                // 場外
                if (h_n < 0 or H <= h_n or w_n < 0 or W <= w_n) continue;
                // 壁じゃない
                if (ma[h_n][w_n] != '#') continue;

                ll score = dist[h][w] + 1;
                if (dist[h_n][w_n] <= score) continue;

                dist[h_n][w_n] = score;
                q.push_back(state(h_n, w_n));
            }
        }
    }
    cout << dist[H - 1][W - 1] << endl;
    /*
        for (ll i = 0; i < H; i++) {
            for (ll j = 0; j < W; j++) {
                cout << dist[i][j] << " ";
            }
            cout << endl;
        }
    */
    return 0;
}
