#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, std::vector<std::string> S, long long Q, std::vector<long long> X, std::vector<long long> Y){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> X(Q);
    std::vector<long long> Y(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    solve(N, M, std::move(S), Q, std::move(X), std::move(Y));
    return 0;
}
