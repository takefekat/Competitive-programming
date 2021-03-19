#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct robot{
    ll s;
    ll t;
    bool operator<(const robot& r) const{
        return t < r.t;
    }
};

void solve(long long N, std::vector<long long> X, std::vector<long long> L){
    
    vector<robot> r(N);
    for(ll i=0; i<N; i++) {
        r[i].s = X[i] - L[i];
        r[i].t = X[i] + L[i];
    }
    sort(r.begin(),r.end());

    ll ans = 0;
    ll last = -(1LL<<62);
    for(ll i=0; i<N; i++) {
        if(last > r[i].s) continue;
        ans++;
        last = r[i].t;
    }
    cout << ans << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> X(N);
    std::vector<long long> L(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&L[i]);
    }
    solve(N, std::move(X), std::move(L));
    return 0;
}
