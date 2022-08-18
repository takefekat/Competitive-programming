#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";


int main(void)
{
  int H1, H2, W1, W2;
  int a[15][15], b[15][15];
  
  cin >> H1 >> W1;
  for(int i = 1; i <= H1; i++) for(int j = 1; j <= W1; j++) cin >> a[i][j];
  cin >> H2 >> W2;
  for(int i = 1; i <= H2; i++) for(int j = 1; j <= W2; j++) cin >> b[i][j];
  
  for(int i = 0; i < (1<<H1); i++){
    for(int j = 0; j < (1<<W1); j++){
      
      vector<int> hvec, wvec;
      for(int k = 1; k <= H1; k++) if((i & (1<<(k-1))) == 0) hvec.push_back(k);
      for(int k = 1; k <= W1; k++) if((j & (1<<(k-1))) == 0) wvec.push_back(k);
      if(hvec.size() != H2 || wvec.size() != W2) continue;
     
      bool match = true;
      for(int k = 1; k <= H2; k++){
        for(int l = 1; l <= W2; l++){
          if(a[hvec[k-1]][wvec[l-1]] != b[k][l]){
            match = false;
            break;
          }
        }
      }
      if(match){
        cout << YES << endl;
        return 0;
      }
       
    }
  }
  cout << NO << endl;
  return 0;
}
