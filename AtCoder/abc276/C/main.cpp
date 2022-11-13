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

    vector<ll> p(N);
    for (ll i = 0; i < N; i++) { cin >> p[i]; }
    
    prev_permutation(p.begin(), p.end());
    for (ll i = 0; i < N; i++) {
        cout << p[i];
        cout << (i == N-1 ? "\n" : " ");
    }
    

    return 0;
}
