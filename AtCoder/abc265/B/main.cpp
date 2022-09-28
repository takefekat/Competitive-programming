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



int main(){
    ll N,M,T;
    cin >> N >> M >> T;
    vector<ll> A(N-1);
    for (ll i = 0; i < N-1; i++) cin >> A[i];
    map<ll,ll> xy;
    for (ll i = 0; i < M; i++) {
        ll x, y;
        cin >> x >>y;
        x--;
        xy[x] = y;
    }

    for (ll i = 0; i < N-1; i++) {
        if( T > A[i] ) {
            T -= A[i];
            if( xy.find(i+1) != xy.end() ){
                T += xy[i+1];
            }
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    
    
    
    return 0;
}
