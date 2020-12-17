#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main()
{

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll ans = min(min(a, b), min(c, d));
    cout << ans << endl;

    return 0;
}
