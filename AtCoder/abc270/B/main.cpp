#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()



int main(){
    ll x,y,z;
    cin >> x >> y >> z;

    if(x < 0) {
        x *= -1; 
        y *= -1;
        z *= -1;
    }

    ll ans = -1;

    if( 0 < y && y < x ) { // 壁が邪魔をする
        if( y < z ) // 到達不可能
            ans = -1;
        else if ( z < 0 ){
            ans = 2 * abs(z) + x;          
        }else{
            ans = x;
        }
    }else{
        ans = x; // 壁は関係ない
    }
        
    cout << ans << endl;

    return 0;
}
