#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
using pll = pair<ll,ll>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long L, long long R, std::vector<long long> A){
    vll sum_b(N+1,0);
    for(ll i=N-1; i>=0; i--){
        sum_b[i] = sum_b[i+1] + A[i];
    }

    pll res(INT_MAX, -1); // (sum, y)
    for(ll y=N-1; y>=0; y--){
        if( sum_b[y] > R*(N-y) ) { // R に置き換えた方がお得
            res = min(res, pll(R*N-y) )
        }
    }
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long L;
    std::scanf("%lld", &L);
    long long R;
    std::scanf("%lld", &R);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, L, R, std::move(A));
    return 0;
}
