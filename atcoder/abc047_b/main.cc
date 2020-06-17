#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

int main(){
    ll W,H,N;
    cin >> W >> H >> N;
    ll lx=0,ly=0,hx=W,hy=H;
    for(ll i = 0; i < N ; i++){
      ll x,y,a;
      cin >> x >> y >> a;
      if (a==1 && lx < x) {
          lx=x;
      }
      if (a==2 && hx > x) {
          hx=x;
      }
      if (a==3 && ly < y) {
          ly=y;
      }
      if (a==4 && hy > y) {
          hy=y;
      }
    }
    cout << max((hx-lx),0LL)*max((hy-ly),0LL) << endl;

}
