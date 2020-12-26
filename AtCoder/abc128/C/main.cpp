#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const long long MOD = 2;

void solve(ll N, ll M, vll &k, vector<set<ll>> &s, vll &p) {
  ll ans = 0;
  for (ll bitset = 0; bitset < (1 << N);
       bitset++)  // 全てのスイッチの押し方を調べる　O(2^N)
  {
    vll light_cnt(M, 0);
    for (ll swit = 0; swit < N;
         swit++)  // 各スイッチが押されているか調べる　O(N)
    {
      if ((bitset & (1 << swit)) != 0)  // スイッチが押されている場合
      {
        for (ll light = 0; light < M; light++) {
          if (s[light].find(swit + 1) != s[light].end())  // この判定がO(log N)
          {
            light_cnt[light]++;
          }
        }
      }
    }
    bool flag = true;
    for (ll light = 0; light < M;
         light++)  // ライトの押された回数がpと一致するか判定する 0(M)
    {
      if (light_cnt[light] % 2 != p[light]) flag = false;
    }
    if (flag) ans++;
  }
  cout << ans << endl;
}

signed main() {
  ll N, M;
  cin >> N >> M;
  vll k(M);
  vector<set<ll>> s(M);
  vll p(M);
  for (ll i = 0; i < M; i++) {
    cin >> k[i];
    for (ll j = 0; j < k[i]; j++) {
      ll tmp;
      cin >> tmp;
      s[i].insert(tmp);
    }
  }
  for (ll i = 0; i < M; i++) {
    cin >> p[i];
  }
  solve(N, M, k, s, p);
  return 0;
}
