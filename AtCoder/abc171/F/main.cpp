#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const long long MOD = 1000000007;

// N!
ll fact(ll N){
    ll ans = 1;
    for(ll i=2; i<=N; i++) {
        ans *= i;
        ans %= MOD;
    }
    return ans;
}

// mod inverse
ll modinv(ll N) {
    ll b = MOD, u = 1, v = 0;
    while (b) {
        long long t = N / b;
        N -= t * b; swap(N, b);
        u -= t * v; swap(u, v);
    }
    u %= MOD;
    if (u < 0) u += MOD;
    return u;
}

// nCk = n! / (N-K)! / K!
ll choose(ll N, ll K){
    return fact(N) * modinv(fact(N-K)) % MOD * modinv(fact(K)) % MOD;
}

ll pow(ll B, ll E){
    if( E==0 ) return 1;
    if( E%2==0 )
        return pow(B*B%MOD,E/2) % MOD;
    else
        return pow(B*B%MOD,E/2) % MOD * B % MOD;
}

void solve(long long K, std::string S){

    ll ans = pow(26LL,K) * fact(S.size()+K) % MOD * modinv(fact(S.size())) % MOD;
    cout << ans << endl;
    
}

signed main(){
    long long K;
    scanf("%lld",&K);
    std::string S;
    std::cin >> S;
    solve(K, S);
    return 0;
}
