#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const long long MOD = 1000000007;


inline ll may_pow(ll b, ll e){
    if(e == 0){
        return 1;
    }
    if( e % 2 == 0 )
        return may_pow(b*b % MOD, e/2) % MOD;
    else
        return may_pow(b*b % MOD, e/2) % MOD * b % MOD;
}

inline mod_inv(ll a){
    
}

}


inline ll choose(ll n, ll k, vector<ll>& fact){
    return fact[n] / fact[k] / fact[n-k];
}

void solve(long long H, long long W, long long A, long long B){

    vector<ll> fact(max(H,W)+1);
    fact[0] = 1;
    for (ll i = 1; i < max(H,W)+1; i++)
    {
        fact[i] = fact[i-1] * i & MOD;
    }
    
    vector<ll> dp(H-A);
    for (ll i = 1; i <= H-A; i++)
    {
        dp[i] = choose(i+B, B, fact);
    }
    
    

}

signed main(){
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(H, W, A, B);
    return 0;
}
