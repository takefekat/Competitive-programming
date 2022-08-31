#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const ll MOD = 998244353LL;
void solve(long long N){

    ll ans = (N % MOD >= 0 ? N % MOD : N % MOD + MOD);
    
    cout << ans << endl;
}

int main(){
    
    long long N;
    std::scanf("%lld", &N);
    solve(N);
    return 0;
}
