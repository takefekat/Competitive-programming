#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct Graph {
    struct Edge {
        int rev, from, to, cap;
        Edge(int r, int f, int t, int c) : rev(r), from(f), to(t), cap(c) {}
    };

    vector<vector<Edge>> list;
    Graph(int N = 0) : list(N) {}
    size_t size() { return list.size(); }

    vector<Edge>& operator[](int i) { return list[i]; }
    Edge& redge(const Edge& e) { return list[e.to][e.rev]; }

    void run_flow(Edge& e, int f) {
        e.cap -= f;
        redge(e).cap += f;
    }

    void addedge(int from, int to, int cap) {
        int fromrev = (int)list[from].size();
        int torev = (int)list[to].size();
        list[from].push_back(Edge(torev, from, to, cap));
        list[to].push_back(Edge(fromrev, to, from, 0));
    }
};

struct FordFulkerson {
    static const int INF = 1 << 30;
    vector<int> seen;

    FordFulkerson() {}

    int fodfs(Graph& G, int v, int t, int f) {
        if (v == t) return f;

        seen[v] = true;
        for (auto& e : G[v]) {
            if (seen[e.to]) continue;

            if (e.cap == 0) continue;

            int flow = fodfs(G, e.to, t, min(f, e.cap));

            if (flow == 0) continue;

            G.run_flow(e, flow);

            return flow;
        }

        return 0;
    }

    int solve(Graph& G, int s, int t) {
        int res = 0;

        while (true) {
            seen.assign((int)G.size(), 0);
            int flow = fodfs(G, s, t, INF);

            if (flow == 0) return res;

            res += flow;
        }
        return 0;
    }
};

const int INF = INT_MAX - 1;

int main() {
    ll H, W;
    cin >> H >> W;
    vector<string> c(H);
    for (ll i = 0; i < H; i++) {
        cin >> c[i];
    }

    ll V = H * W + 2;
    ll s = V - 2;
    ll t = V - 1;
    Graph g(V);

    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            if (c[i][j] == '.') {
                // a: i * H + j に広告をうつ
                g.addedge(i * H + j, t, 0);
                // b: i * H + j に 広告をうたない
                g.addedge(s, i * H + j, 1);
            } else {
                // a: i * H + j に広告をうつ
                g.addedge(i * H + j, t, INF);
                // b: i * H + j に 広告をうたない
                g.addedge(s, i * H + j, 0);
            }
        }
    }

    for (ll i = 0; i < H; i++) {
        for (ll j = 0; j < W; j++) {
            ll u = H * i + j;
            if (c[i][j] == '*') continue;
            if (i > 0) g.addedge(u, u - W, 0);
            if (i != H - 1) g.addedge(u, u + W, 0);
            if (j > 0) g.addedge(u, u - 1, 0);
            if (j != W - 1) g.addedge(u, u + 1, 0);
        }
    }

    FordFulkerson ff;
    cout << ff.solve(g, s, t) << endl;

    return 0;
}
