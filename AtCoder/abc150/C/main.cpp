#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, std::vector<long long> P, std::vector<long long> Q) {
  vector<ll> perm(N);
  for (ll i = 0; i < N; i++) perm[i] = i + 1;

  ll idx = 0;
  ll Pi = -1;
  ll Qi = -1;
  do {
    bool flag = true;
    for (ll i = 0; i < N; i++)
      if (P[i] != perm[i]) flag = false;
    if (flag) Pi = idx;

    flag = true;
    for (ll i = 0; i < N; i++)
      if (Q[i] != perm[i]) flag = false;
    if (flag) Qi = idx;

    idx++;
  } while (next_permutation(perm.begin(), perm.end()));
  cout << abs(Pi - Qi) << endl;
}

signed main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> P(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &P[i]);
  }
  std::vector<long long> Q(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &Q[i]);
  }
  solve(N, std::move(P), std::move(Q));
  return 0;
}
