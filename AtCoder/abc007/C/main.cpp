#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct state {
    ll y, x, d;
    state(ll y, ll x, ll d) : y(y), x(x), d(d) {}
};

ll R, C, sy, sx, gy, gx;
vector<string> m;
vector<vector<bool>> seen;
ll dx[] = {-1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};

ll bfs(ll y, ll x) {
    queue<state> todo;
    todo.push(state(y, x, 0));
    while (!todo.empty()) {
        state s = todo.front();
        todo.pop();
        if (seen[s.y][s.x]) continue;
        seen[s.y][s.x] = true;
        if (s.y == gy and s.x == gx) return s.d;

        for (ll i = 0; i < 4; i++) {
            ll ny = s.y + dy[i];
            ll nx = s.x + dx[i];
            if (ny < 0 or ny >= R or nx < 0 or nx >= C) continue;
            if (m[ny][nx] == '#') continue;
            if (seen[ny][nx]) continue;
            todo.push(state(ny, nx, s.d + 1));
        }
    }
    return -1;
}

int main() {
    cin >> R >> C >> sy >> sx >> gy >> gx;
    m.assign(R, "");
    seen.assign(R, vector<bool>(C, false));
    for (ll i = 0; i < R; i++) {
        cin >> m[i];
    }
    sy--;
    sx--;
    gy--;
    gx--;
    ll ans = bfs(sy, sx);
    cout << ans << endl;

    return 0;
}
