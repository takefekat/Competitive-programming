#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> mapint;
vector<string> mapstr;
ll H, W, Ch, Cw, Dh, Dw;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int y, int x, int seg)
{
    mapint[y][x] = seg;
    for (ll i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx and nx < W and 0 <= ny and ny < H)
        {
            if (mapint[ny][nx] == -1 and mapstr[ny][nx] == '.')
            {
                dfs(ny, nx, seg);
            }
        }
    }
}

int bfs(int s, int g, vector<vector<ll>> &graph)
{
    queue<int> nodes;
    vector<int> reached(graph.size(), -1);

    nodes.push(s);
    reached[s] = 0;
    while (nodes.size())
    {
        int u = nodes.front();
        nodes.pop();
        if (u == g)
        {
            return reached[g];
        }
        for (auto &&e : graph[u])
        {
            if (reached[e] == -1)
            {
                nodes.push(e);
                reached[e] = reached[u] + 1;
            }
        }
    }
    return -1;
}

signed main()
{

    cin >> H >> W >> Ch >> Cw >> Dh >> Dw;
    for (ll i = 0; i < H; i++)
    {
        string s;
        cin >> s;
        mapstr.push_back(s);
    }
    mapint = vector<vector<int>>(H, vector<int>(W, -1));

    ll seg = 0;
    for (ll i = 0; i < H; i++)
    {
        for (ll j = 0; j < W; j++)
        {
            if (mapstr[i][j] == '.' and mapint[i][j] == -1)
            {
                dfs(i, j, seg);
                seg++;
            }
        }
    }

    vector<vector<ll>> graph(seg + 1);
    for (ll i = 0; i < H; i++)
    {
        for (ll j = 0; j < W; j++)
        {
            if (mapint[i][j] == -1)
                continue;

            for (ll di = -2; di <= 2; di++)
            {
                for (ll dj = -2; dj <= 2; dj++)
                {
                    int nx = j + dj;
                    int ny = i + di;

                    if (0 <= nx and nx < W and 0 <= ny and ny < H)
                    {
                        if (mapint[ny][nx] != -1 and mapint[ny][nx] != mapint[i][j])
                        {
                            graph[mapint[i][j]].push_back(mapint[ny][nx]);
                            graph[mapint[ny][nx]].push_back(mapint[i][j]);
                        }
                    }
                }
            }
        }
    }
    for (ll i = 0; i < seg + 1; i++)
    {
        sort(graph[i].begin(), graph[i].end());
        unique(graph[i].begin(), graph[i].end());
        graph[i].erase(unique(graph[i].begin(), graph[i].end()), graph[i].end());
    }

    int start = mapint[Ch - 1][Cw - 1];
    int goal = mapint[Dh - 1][Dw - 1];

    ll ans = bfs(start, goal, graph);

    cout << ans << endl;

    return 0;
}
