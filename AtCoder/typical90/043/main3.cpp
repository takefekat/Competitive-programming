#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll dh[] = {0, 1, 0, -1};
const ll dw[] = {1, 0, -1, 0};

using state = tuple<ll, ll, ll, ll>;

int main() {
    ll H, W, si, sj, ti, tj;
    cin >> H >> W >> si >> sj >> ti >> tj;
    si--;
    sj--;
    ti--;
    tj--;

    vector<string> m(H);
    for (auto&& e : m) cin >> e;

    vector<vvll> dist(4, vvll(H, vll(W, INT_MAX)));

    deque<state> qu;
    qu.push_front(state(si, sj, 0, 0));
    qu.push_front(state(si, sj, 0, 1));
    qu.push_front(state(si, sj, 0, 2));
    qu.push_front(state(si, sj, 0, 3));
    while (qu.size()) {
        auto [ch, cw, cs, cd] = qu.front();
        qu.pop_front();
        if (dist[cd][ch][cw] < cs) continue;
        dist[cd][ch][cw] = cs;

        if (ch == ti and cw == tj) {
            cout << dist[cd][ti][tj] << endl;
            break;
        }

        // cout << cur.h << " " << cur.w << " " << cur.score << endl;
        for (ll i = 0; i < 4; i++) {
            ll h = ch + dh[i];
            ll w = cw + dw[i];
            if (h >= 0 and h < H and w >= 0 and w < W and m[h][w] != '#') {
                ll score = dist[cd][ch][cw] + (i == cd ? 0 : 1);
                if (dist[i][h][w] > score) {
                    dist[i][h][w] = score;
                    if (i == cd) qu.push_front(state(h, w, score, i));
                    if (i != cd) qu.push_back(state(h, w, score, i));
                }
            }
        }
    }

    return 0;
}
