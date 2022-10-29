#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()



int main(){
    ll H,W;
    cin >> H >> W;
    vector<string> grid(H);

    for (ll i = 0; i < H; i++)    cin >> grid[i];
    
    for (ll j = 0; j < W; j++) {
        ll ans = 0;
        for (ll i = 0; i < H; i++) {
            if(grid[i][j] == '#') ans ++;
        }
        cout << ans;
        if(j == W-1) cout << endl;
        else cout << " ";
    }
    
    
    return 0;
}
