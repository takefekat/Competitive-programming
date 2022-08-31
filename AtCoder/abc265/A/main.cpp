#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long X, long long Y, long long N){
    ll ans = 0;
    if( 3*X < Y ){
        ans = N*X;
    }else{
        ans = N/3 * Y + N%3 * X;
    }
    cout << ans << endl;
}

int main(){
    long long X;
    std::scanf("%lld", &X);
    long long Y;
    std::scanf("%lld", &Y);
    long long N;
    std::scanf("%lld", &N);
    solve(X, Y, N);
    return 0;
}
