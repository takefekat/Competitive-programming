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
    for(ll i=0; i<N; i++) cin >> A[i];

    vector<ll> ans(2*N+2, -1);
    ans[1] = 0; // 始祖のアメーバ
    for (ll i = 0; i < N; i++) {
        ans[2*i+1] =  ans[A[i]] + 1;
        ans[2*i+2] =  ans[A[i]] + 1;
    }
    
    for(ll i=1; i<=2*N+1; i++) printf("%lld\n", ans[i]);

    return 0;
}
