#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



// WA解法
void solve2(long long X, long long K, long long D){
    ll ans = 0;
    if( log10(abs(K))+log10(abs(D)) > 16 or K*D > abs(X) ){
        if( ((K-abs(X)/D)&1) == 1 )
            ans = X - (X/D+1)*D;
        else
            ans = X - (X/D)*D;

    }
    else{
        ans =  abs(X) - abs(K) * abs(D) ;
    }
    cout << abs(ans) << endl;
}

// AC解法
void solve(long long X, long long K, long long D){
    ll ans = 0;
    if( log10(abs(K))+log10(abs(D)) > 16 or K*D > abs(X) ){
        if( ((K-abs(X)/D)&1) == 1 )
            if( X >= 0 ) 
                ans = X - (X/D+1)*D;
            else
                ans = X + (abs(X)/D+1)*D;
        else
            if( X >= 0 ) 
                ans = X - (X/D)*D;
            else
                ans = X + (abs(X)/D)*D;
    }
    else{
        ans =  abs(X) - abs(K) * abs(D) ;
    }
    cout << abs(ans) << endl;
}


signed main(){
    long long X;
    scanf("%lld",&X);
    long long K;
    scanf("%lld",&K);
    long long D;
    scanf("%lld",&D);
    solve(X, K, D);
    return 0;
}
