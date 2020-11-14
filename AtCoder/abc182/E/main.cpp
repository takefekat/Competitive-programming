#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vecll;

ll dx[] = {1, 0, -1, 0};
ll dy[] = {0, 1, 0, -1};

void solve(ll H, ll W, ll N, ll M, vecll A, vecll B, vecll C, vecll D)
{
    // マップ
    vector<vecll> masu(H, vecll(W, 0));
    for (ll i = 0; i < N; i++)
        masu[B[i]][A[i]] = 1;
    for (ll i = 0; i < M; i++)
        masu[D[i]][C[i]] = 2;

    set<ll> a_set; // 縦種類
    set<ll> b_set; // 横種類
    for (auto &&e : A)
        a_set.insert(e);
    for (auto &&e : B)
        b_set.insert(e);

    ll ans = H * W - (b_set.size() * W + a_set.size() * H - a_set.size() * b_set.size());

    for (ll i = 0; i < M; i++)
    { // 各ブロックについて
        for (ll dir = 0; dir < 4; dir++)
        { // 各方向
                }
    }
}

signed main()
{
    ll H, W, N, M;
    cin >> H >> W >> N >> M;
    vecll A(N), B(N), C(M), D(M);
    for (ll i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
    }
    for (ll i = 0; i < M; i++)
    {
        cin >> C[i] >> D[i];
    }
    solve(H, W, N, M, A, B, C, D);
    return 0;
}
