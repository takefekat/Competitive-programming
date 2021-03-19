#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct seg{
    ll s;
    ll t;
    bool operator<(const seg& s) const{
        return t < s.t;
    }
};

void solve(long long N, long long M, std::vector<long long> a, std::vector<long long> b){

    vector<seg> s(M);
    for(ll i=0; i<M; i++) {
        s[i].s = a[i];
        s[i].t = b[i];
    }
    sort(s.begin(), s.end());

    ll ans = 0;
    ll last = -1;
    for(ll i=0; i<M; i++) {
        if(last > s[i].s) continue;
        ans++;
        last = s[i].t;
        
    }
    cout << ans << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    solve(N, M, std::move(a), std::move(b));
    return 0;
}
