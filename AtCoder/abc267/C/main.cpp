#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, std::vector<long long> A){
    
    // 累積和
    vector<ll> sum(N+1,0);
    sum[0] = 0;
    for (ll i = 1; i < N+1; i++) sum[i] = A[i-1] + sum[i-1];
    
    // 探索
    ll res = 0;
    for (ll i = 1; i <= M; i++) res += i * A[i-1];
    ll ans = res;
 
    for (ll i = 1; i < N-M+1; i++) {
        res -= A[i-1];
        res -= sum[i+M-1] - sum[i];
        res += M*A[i+M-1];

        ans = max(ans, res);
    }
    cout << ans << endl;    
 
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, M, std::move(A));
    return 0;
}
