#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()



int main(){
    ll H, W;
    cin >> H >> W;
    vector<string> g(H);
    for (ll i = 0; i < H; i++)  cin >> g[i];
    
    vector<vector<bool>> reached(H, vector<bool>(W, false));

    ll h = 0, w = 0;
    while(1){      
        if (reached[h][w] == true){
            cout << -1 << endl;
            break;
        }
        reached[h][w] = true;

        if(g[h][w] == 'U' && h != 0) h--;
        else if(g[h][w] == 'D' && h != H-1) h++;
        else if(g[h][w] == 'L' && w != 0) w--;
        else if(g[h][w] == 'R' && w != W-1) w++;
        else{
            cout << h+1 << " " << w+1 << endl;
            break;
        }
    }
    
    return 0;
}
