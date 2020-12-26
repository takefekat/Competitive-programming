#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

// 深さ優先探索: A[index]に値を入れながら探索
ll dfs(ll N, ll M, vll &A, ll index, ll Q, vll &a, vll &b, vll &c, vll &d) {
  if (index == N)  // 終了条件
  {
    ll ans = 0;  //スコア計算
    for (ll i = 0; i < Q; i++) {
      if (A[b[i] - 1] - A[a[i] - 1] == c[i]) ans += d[i];
    }
    return ans;
  }

  ll ans = 0;
  for (ll i = 1; i <= M; i++) {
    if (index > 0 and A[index - 1] > i)  //制約を満たさない場合は探索しない
      continue;
    A[index] = i;
    ans = max(ans, dfs(N, M, A, index + 1, Q, a, b, c, d));  //再帰
  }
  return ans;
}

void solve(long long N, long long M, long long Q, std::vector<long long> a,
           std::vector<long long> b, std::vector<long long> c,
           std::vector<long long> d) {
  // Aは、10 C N 通りで、最大252通りなので、全て試す
  vll A(N, 0);
  ll ans = dfs(N, M, A, 0, Q, a, b, c, d);
  cout << ans << endl;
}

signed main() {
  long long N;
  scanf("%lld", &N);
  long long M;
  scanf("%lld", &M);
  long long Q;
  scanf("%lld", &Q);
  std::vector<long long> a(Q);
  std::vector<long long> b(Q);
  std::vector<long long> c(Q);
  std::vector<long long> d(Q);
  for (int i = 0; i < Q; i++) {
    scanf("%lld", &a[i]);
    scanf("%lld", &b[i]);
    scanf("%lld", &c[i]);
    scanf("%lld", &d[i]);
  }
  solve(N, M, Q, std::move(a), std::move(b), std::move(c), std::move(d));
  return 0;
}
