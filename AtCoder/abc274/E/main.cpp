#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, std::vector<long long> X, std::vector<long long> Y, std::vector<long long> P, std::vector<long long> Q){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> X(N);
    std::vector<long long> Y(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    std::vector<long long> P(M);
    std::vector<long long> Q(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &P[i]);
        std::scanf("%lld", &Q[i]);
    }
    solve(N, M, std::move(X), std::move(Y), std::move(P), std::move(Q));
    return 0;
}
