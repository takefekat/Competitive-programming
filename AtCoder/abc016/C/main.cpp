#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
using Graph = vector<vector<ll>>;

ll bfs(Graph &g, ll start) {
    vector<ll> seen(g.size(), -1);

    queue<ll> todo;
    todo.push(start);
    seen[start] = 0;
    while (!todo.empty()) {
        ll v = todo.front();
        todo.pop();

        for (auto &&nxt : g[v]) {
            if (seen[nxt] != -1) continue;
            todo.push(nxt);
            seen[nxt] = seen[v] + 1;
        }
    }

    ll res = 0;
    for (auto &&x : seen) {
        if (x == 2) res++;
    }
    return res;
}

int main() {
    ll N, M;
    cin >> N >> M;
    Graph g(N);
    for (ll i = 0; i < M; i++) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (ll i = 0; i < N; i++) {
        cout << bfs(g, i) << endl;
    }
    return 0;
}
