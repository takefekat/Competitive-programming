#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const long long MOD = 1000000007;

void solve(long long N, long long K, std::vector<long long> A){

    ll ans = 1;
    deque<ll> p,m;

    for(auto &&e : A) {
        if(e>=0)
            p.push_back(e);
        else   
            m.push_back(e);
    }
    
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    sort(m.begin(),m.end());

    for(ll i=0; i<K; i++) {
        if( p.size()>=2 and m.size()>=2 ) {
            if( p[0]*p[1] > m[0]*m[1] ) {
                ans *= p[0] % MOD;
                ans *= p[1] % MOD;
                i++;
                p.pop_front();
                p.pop_front();
                continue;
            }else {
                ans = ((ans * m[0] % MOD) + MOD) % MOD;
                ans = ((ans * m[1] % MOD) + MOD) % MOD;
                m.pop_front();
                m.pop_front();
                i++;
                continue;
            }
        }
        else if( p.size()>=2 and m.size()<2 ){
            ans *= p[0] % MOD;
            ans *= p[1] % MOD;
            i++;
            p.pop_front();
                p.pop_front();
                continue;
        }
        else if(){

        }
    }

 

    cout << ans << endl;
    
    

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, K, std::move(A));
    return 0;
}
