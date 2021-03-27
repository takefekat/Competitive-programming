#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using Graph = vector<vector<ll>>;

struct state {
    vector<int> v;
    int cost;
    state(vector<int> v, int cost) : v(v), cost(cost) {}
};

void bfs(vector<int> s) {
    queue<state> todo;
    vector<int> goal = {1, 2, 3, 4, 5, 6, 7, 8, 0};
    todo.push(s);

    while (!todo.empty()) {
        state u = todo.front();
        todo.pop();

        if (u.v == goal) {
            cout << u.v << endl;
            return;
        }

        ll zi = -1;
        for (ll i = 0; i < 9; i++) {  // 0の位置を探す
            if (u[i] == 0) {
                zi = i;
                break;
            }
        }

        if (zi > 2) {  // 上に行けるか
            vector<int> v = u;
            swap(v[zi], v[zi - 3]);
            todo.push(state(v, u.cost + 1));
        }
        if (zi < 6) {  // 下に行けるか
            vector<int> v = u;
            swap(v[zi], v[zi + 3]);
            todo.push(v);
        }
        if (zi % 3 != 0) {  // 左に行けるか
            vector<int> v = u;
            swap(v[zi], v[zi - 1]);
            todo.push(v);
        }
        if (zi % 3 != 0) {  // 右に行けるか
            vector<int> v = u;
            swap(v[zi], v[zi + 1]);
            todo.push(v);
        }
    }
}

int main() {
    ll n;
    cin >> n;
    Graph g(n);
    for (ll i = 0; i < n; i++) {
        ll u, k;
        cin >> u >> k;
        u--;  // 0-indexにする
        for (ll j = 0; j < k; j++) {
            ll v;
            cin >> v;
            v--;  // 0-indexにする
            g[u].push_back(v);
        }
    }
    vector<ll> d(n, -1);
    bfs(g, 0, d);
    for (ll i = 0; i < n; i++) {
        cout << i + 1 << " " << d[i] << endl;
    }
}
