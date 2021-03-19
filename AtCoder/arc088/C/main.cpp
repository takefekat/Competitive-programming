#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long X, long long Y){
    ll A = X;
    ll ans = 1;
    while(A<=Y){
        A *= 2;
        ans ++;
    }
    cout << ans-1 << endl;
}

int main(){
    long long X;
    scanf("%lld",&X);
    long long Y;
    scanf("%lld",&Y);
    solve(X, Y);
    return 0;
}
