#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
const ll INF = 1LL << 60;

struct st {
    ll idx, s, t;
    st(ll idx, ll s, ll t) : idx(idx), s(s), t(t) {}
    bool operator<(const st& x) const { return t > x.t; }
};

void solve(long long N, std::vector<long long> S, std::vector<long long> T) {
    vll sum(2 * N + 1, 0);
    sum[0] = 0;
    for (ll i = 0; i < 2 * N; i++) {
        sum[i + 1] = sum[i] + S[i % N];
    }

    priority_queue<st> pq;
    for (ll i = 0; i < N; i++) {
        pq.push(st(i, S[i], T[i]));
    }

    vll res(N, INF);
    auto x = pq.top();
    pq.pop();

    ll tm = x.t;    // 時刻 tm
    ll idx = x.idx; // 現在見ているid
    res[idx] = tm;

    for (ll i = 0; i < N - 1; i++) {
        // 既に宝石を入手した人はパス
        while (res[x.idx] != INF) {
            x = pq.top();
            pq.pop();
        }

        // 高橋くんから貰う時刻が早い場合
        if (tm + S[idx] > x.t) {
            if (tm + (sum[(idx > x.idx ? x.idx + N : x.idx)] - sum[idx]) >
                x.t) {
                tm = x.t;
                idx = x.idx;
                res[idx] = tm;

            } else {
                idx = x.idx;
                tm += sum[(idx > x.idx ? x.idx + N : x.idx)] - sum[idx];
                res[idx] = tm;
            }
        // 隣の人からもらう時刻が早い場合
        } else {
            ll nid = (idx + 1 == N ? 0 : idx + 1);
            tm += S[idx];
            res[nid] = tm;

            idx = nid;
        }
    }

    for (ll i = 0; i < N; i++) {
        cout << res[i] << endl;
    }
}

int main() {
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> S(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &S[i]);
    }
    std::vector<long long> T(N);
    for (int i = 0; i < N; i++) {
        std::scanf("%lld", &T[i]);
    }
    solve(N, std::move(S), std::move(T));
    return 0;
}
