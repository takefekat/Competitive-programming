#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll N, max_h = -1, ans = -1;
    cin >> N;

    for (ll i = 0; i < N; i++) { 
        ll h;
        cin >> h;
        
        if(max_h < h){
            max_h = h;
            ans = i+1;
        }
    }
    cout << ans << endl;

    return 0;
}
