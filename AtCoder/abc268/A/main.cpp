#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


int main() {
    set<ll> s; 
    for (ll i = 0; i < 5; i++) 
    { 
        ll x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    
    return 0;
}
