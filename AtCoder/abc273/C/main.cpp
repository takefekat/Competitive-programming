#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()



int main(){
    ll N; cin >> N;
    vector<ll> A(N);
    for (ll i = 0; i < N; i++) cin >> A[i];

    vector<ll> A_org = A;
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    
    map<ll,ll> res; // A[i] 
    for (ll i = 0; i < A.size(); i++) {
        res[A[i]] = A.size() - i - 1;   // 1 2 7 8 : res[1] = 3 == 4 - 0 - 1
    }

    vector<ll> ans(N,0);
    for (ll i = 0; i < A_org.size(); i++) {
        ans[res[A_org[i]]]++;
    }

    for (auto x : ans) cout << x << endl;

    return 0;
}
