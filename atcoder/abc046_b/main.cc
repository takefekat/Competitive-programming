#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll N,K;
    cin >> N >> K;

    ll ans = 1;
    for(ll i = 0; i < N ; i++){
      if (i==0) {
          ans *= K;
      }
      else {
          ans *= K-1;
      }
    }
    cout << ans << endl;

    return 0;
}
