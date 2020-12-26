#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, long long D, std::vector<std::vector<long long>> X) {
  ll ans = 0;
  for (ll i = 0; i < N; i++) {
    for (ll j = i + 1; j < N; j++) {
      ll d = 0;
      for (ll k = 0; k < D; k++) {
        d += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
      }

      for (ll k = 0; k * k <= d; k++) {
        if (k * k == d) ans++;
      }
    }
  }
  cout << ans << endl;
}

signed main() {
  long long N;
  scanf("%lld", &N);
  long long D;
  scanf("%lld", &D);
  std::vector<std::vector<long long>> X(N, std::vector<long long>(D));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      scanf("%lld", &X[i][j]);
    }
  }
  solve(N, D, std::move(X));
  return 0;
}
