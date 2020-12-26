#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

void solve(long long H, long long W, long long M, std::vector<pll> XY) {
  sort(XY.begin(), XY.end());

  ll Ymin = XY[0].second;
  ll Xpre = XY[0].first;
  vector<pll> XYnew;
  XYnew.push_back(XY[0]);
  for (ll i = 1; i < M; i++) {
    if (Ymin > XY[i].second and Xpre < XY[i].first) {
      Ymin = XY[i].second;
      Xpre = XY[i].first;
      XYnew.push_back(XY[i]);
    }
  }
  for (ll i = 0; i < XYnew.size(); i++) {
    cout << XYnew[i].first << " " << XYnew[i].second << endl;
  }

  ll ans = 0;
  ll xy_i = 0;
  ll hei = H;
  for (ll i = 0; i < W; i++) {
    if (xy_i < XYnew.size() and XYnew[xy_i].first == i) {
      hei = H - XYnew[xy_i].second - 1;
      xy_i++;
    }
    ans += hei;
  }
  cout << ans << endl;
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
