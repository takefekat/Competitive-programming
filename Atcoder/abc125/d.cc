#include <bits/stdc++.h>
using namespace std;

int main(){

  int n,ans = INT_MAX;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
      int v,c;
      cin >> v >> c;
      if(ans > v - c){
        ans = v-c;
      }
  }
  cout << ans << endl;
}
