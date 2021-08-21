#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll dh[] = {0, 1, 0, -1};
const ll dw[] = {1, 0, -1, 0};

struct state {
    ll h, w, score, dir;
    state(ll h, ll w, ll s, ll d) : h(h), w(w), score(s), dir(d) {}
    bool operator<(const state& tgt) const { return score > tgt.score; }
};

int main() {
    ll H, W, si, sj, ti, tj;
    cin >> H >> W >> si >> sj >> ti >> tj;
    si--;
    sj--;
    ti--;
    tj--;

    vector<string> m(H);
    for (auto&& e : m) cin >> e;

    vector<vvll> dist(H, vvll(W, vll(4, INT_MAX)));

    deque<state> qu;
    qu.push_front(state(si, sj, 0, 0));
    qu.push_front(state(si, sj, 0, 1));
    qu.push_front(state(si, sj, 0, 2));
    qu.push_front(state(si, sj, 0, 3));
    while (qu.size()) {
        auto cur = qu.front();
        qu.pop_front();
        if (dist[cur.h][cur.w][cur.dir] < cur.score) continue;
        dist[cur.h][cur.w][cur.dir] = cur.score;

        if (cur.h == ti and cur.w == tj) {
            cout << dist[ti][tj][cur.dir] << endl;
            break;
        }

        // cout << cur.h << " " << cur.w << " " << cur.score << endl;
        for (ll i = 0; i < 4; i++) {
            ll h = cur.h + dh[i];
            ll w = cur.w + dw[i];
            if (h >= 0 and h < H and w >= 0 and w < W and m[h][w] != '#') {
                ll score = dist[cur.h][cur.w][cur.dir] + (i == cur.dir ? 0 : 1);
                if (dist[h][w][i] > score) {
                    dist[h][w][i] = score;
                    if (i == cur.dir) qu.push_front(state(h, w, score, i));
                    if (i != cur.dir) qu.push_back(state(h, w, score, i));
                }
            }
        }
    }

    return 0;
}
