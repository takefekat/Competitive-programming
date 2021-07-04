#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const ll INF = 1LL << 30;
struct Edge {
    int to, cap, rev;
    Edge(int t, int c, int r) : to(t), cap(c), rev(r) {}
};

void add_edge(int from, int to, int cap, vector<vector<Edge>> &g) {
    g[from].push_back(Edge(to, cap, g[to].size()));
    g[to].push_back(Edge(from, 0, g[from].size() - 1));
}

int dfs(int v, int t, int f, vector<vector<Edge>> &g, vector<int> &used) {
    if (v == t) return f;
    used[v] = 1;
    for (Edge &e : g[v]) {
        if (!used[e.to] && e.cap > 0) {
            int d = dfs(e.to, t, min(f, e.cap), g, used);
            if (d > 0) {
                e.cap -= d;
                g[e.to][e.rev].cap += d;
                return d;
            }
        }
    }
    return 0;
}

int max_flow(int s, int t, vector<vector<Edge>> g) {
    int flow = 0;
    while (1) {
        vector<int> used(g.size(), 0);
        int f = dfs(s, t, INF, g, used);
        if (f == 0) return flow;
        flow += f;
    }
}

int main() {
    ll N, M;
    cin >> N >> M;
    vector<vector<Edge>> g(N);
    for (ll i = 0; i < M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        add_edge(u, v, c, g);
    }
    cout << max_flow(0, N - 1, g) << endl;
}