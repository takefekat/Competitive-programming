#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, long long M, long long A, long long B, long long C, long long D, long long E, long long F, std::vector<long long> X, std::vector<long long> Y){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    long long C;
    std::scanf("%lld", &C);
    long long D;
    std::scanf("%lld", &D);
    long long E;
    std::scanf("%lld", &E);
    long long F;
    std::scanf("%lld", &F);
    std::vector<long long> X(M);
    std::vector<long long> Y(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    solve(N, M, A, B, C, D, E, F, std::move(X), std::move(Y));
    return 0;
}
