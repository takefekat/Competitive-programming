#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

void solve(long long H, long long W, long long M, std::vector<pll> XY) {
  sort(XY.begin(), XY.end());

  ll ans = 0;

  ll xy_i = 0;
  for (ll i = 0; i < W; i++) {
    ans +=
  }
}

signed main() {
  long long H;
  scanf("%lld", &H);
  long long W;
  scanf("%lld", &W);
  long long M;
  scanf("%lld", &M);
  std::vector<pll> XY(M);

  for (int i = 0; i < M; i++) {
    ll X, Y;
    scanf("%lld", &X);
    scanf("%lld", &Y);
    XY[i] = pll(X, Y);
  }
  solve(H, W, M, std::move(XY));
  return 0;
}
