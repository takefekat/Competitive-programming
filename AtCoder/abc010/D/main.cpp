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

void solve(long long N, long long G, long long E, std::vector<long long> p,
           std::vector<long long> a, std::vector<long long> b) {
    ll V = N + 1;
    Graph g(V);

    for (ll i = 0; i < E; i++) {
        g.addedge(a[i], b[i], 1);
        g.addedge(b[i], a[i], 1);
    }

    for (ll i = 0; i < G; i++) {
        // g.addedge(p[i], V + i, 1);
        // g.addedge(V + i, p[i], 1);

        g.addedge(p[i], V - 1, 1);
    }

    ll goal = -1;
    FordFulkerson ff;
    cout << ff.solve(g, 0, V - 1) << endl;
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    long long G;
    std::scanf("%lld", &G);
    long long E;
    std::scanf("%lld", &E);
    std::vector<long long> p(G);
    for (int i = 0; i < G; i++) {
        std::scanf("%lld", &p[i]);
    }
    std::vector<long long> a(E);
    std::vector<long long> b(E);
    for (int i = 0; i < E; i++) {
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
    }
    solve(N, G, E, std::move(p), std::move(a), std::move(b));
    return 0;
}
