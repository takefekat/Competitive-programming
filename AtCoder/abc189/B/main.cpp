#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long X, std::vector<long long> V, std::vector<long long> P){
    ll sum = 0;
    ll ans = -1;
    for(ll i=0; i<N; i++) {
        sum += V[i]*P[i];
        if( sum > X*100){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long X;
    scanf("%lld",&X);
    std::vector<long long> V(N);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&V[i]);
        scanf("%lld",&P[i]);
    }
    solve(N, X, std::move(V), std::move(P));
    return 0;
}
