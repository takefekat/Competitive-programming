#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
using st = pair<ll, ll>;

void solve(long long H, long long W, std::vector<std::vector<long long>> P) {
        ll ans = 0;
    for (ll i = 1; i < (1 << H); i++) {  // bit全探索

        vll seti;  // 選択した行のリスト
        for (ll k = 0; k < H; k++) {
            if ((i & (1 << k)) != 0) seti.push_back(k);
        }

        map<ll, ll> m;
        for (ll j = 0; j < W; j++) {
            ll tgt = P[seti[0]][j];
            bool same = true;

            for (auto &&ti : seti) {  // 列の値が全て等しいか判断する
                if (P[ti][j] != tgt) {
                    same = false;
                    break;
                }
            }
            if (same) {  // 同じ場合、数を数える
                if (m.find(tgt) == m.end())
                    m[tgt] = 1;
                else
                    m[tgt]++;
            }
        }
        ll cnt_j = 0;
        for (auto e : m) {
            cnt_j = max(cnt_j, e.second);
        }
        ans = max(ans, (ll)seti.size() * cnt_j);
    }
    cout << ans << endl;
}

int main() {
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    std::vector<std::vector<long long>> P(H, std::vector<long long>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::scanf("%lld", &P[i][j]);
        }
    }
    solve(H, W, std::move(P));
    return 0;
}
