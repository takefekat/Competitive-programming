#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main(){
    ll N;
    cin >> N;
    
    ll ans = 1;
    for (ll i = 1; i <= N; i++) {
        ans *= i;
    }
    cout << ans << endl;
    
    return 0;
}
