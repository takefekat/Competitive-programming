#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, long long M, long long Q, std::vector<long long> L, std::vector<long long> R, std::vector<long long> X){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> L(Q);
    std::vector<long long> R(Q);
    std::vector<long long> X(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &L[i]);
        std::scanf("%lld", &R[i]);
        std::scanf("%lld", &X[i]);
    }
    solve(N, M, Q, std::move(L), std::move(R), std::move(X));
    return 0;
}
