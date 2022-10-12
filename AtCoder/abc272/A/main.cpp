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

    vector<ll> A(N);
    for(int i = 0 ; i < N ; i++){
        cin >> A[i];
    }

    ll ans = 0;
    for(auto&& x : A) ans += x;
    cout << ans << endl;

    return 0;
}
