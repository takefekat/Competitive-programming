#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> A, long long Q, std::vector<long long> B, std::vector<long long> C){

    unordered_map<ll,ll> um;
    ll ans = 0;
    for(auto &&elm : A) {
        if(um.count(elm) == 0) um[elm]=1;
        else um[elm]++;
        ans += elm;
    }

    for(ll i=0; i<Q; i++) {
        if(um.count(B[i]) != 0){
            if(um[C[i]] == 0){
                um[C[i]] = um[B[i]];

            }
            else{
                um[C[i]] += um[B[i]];
            }
            ans -= (B[i] - C[i])*um[B[i]];
            um.erase(B[i]);
        }

    cout << ans << endl;
    }

    
}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> B(Q);
    std::vector<long long> C(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&B[i]);
        scanf("%lld",&C[i]);
    }
    solve(N, std::move(A), Q, std::move(B), std::move(C));
    return 0;
}
