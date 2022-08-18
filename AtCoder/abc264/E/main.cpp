#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, long long E, std::vector<long long> U, std::vector<long long> V, long long Q, std::vector<long long> X){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long E;
    std::scanf("%lld", &E);
    std::vector<long long> U(E);
    std::vector<long long> V(E);
    for(int i = 0 ; i < E ; i++){
        std::scanf("%lld", &U[i]);
        std::scanf("%lld", &V[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> X(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &X[i]);
    }
    solve(N, M, E, std::move(U), std::move(V), Q, std::move(X));
    return 0;
}
