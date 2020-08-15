#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> L){

    sort(L.begin(), L.end());

    ll ans = 0;
    for(ll i=0; i<N; i++) {
        for(ll j=i+1; j<N; j++) {
            for(ll k=j+1; k<N; k++) {
                if(L[i] != L[j] and L[j] != L[k] and L[k] != L[i]){
                if( L[i]+L[j] > L[k] ) {
                   ans ++;
                }
                }
            }
        }
    }
    cout << ans << endl;
    

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> L(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&L[i]);
    }
    solve(N, std::move(L));
    return 0;
}
