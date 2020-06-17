#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll N,x;
    cin >> N >> x;
    std::vector<ll> v(N);
    for(ll i = 0; i < N ; i++){
        cin >> v[i];
    }

    ll ans = 0;
    for(ll i = 1; i < N ; i++){
        if(v[i-1] + v[i] > x){
            ll diff = (v[i] + v[i-1]) - x;
            v[i] = x - v[i-1];
            ans += diff;
        }
    }
    cout << ans << endl;
}
