#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long Q, std::vector<long long> T, std::vector<long long> X, std::vector<long long> Y, std::vector<long long> V){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> T(Q);
    std::vector<long long> X(Q);
    std::vector<long long> Y(Q);
    std::vector<long long> V(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &T[i]);
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
        std::scanf("%lld", &V[i]);
    }
    solve(N, Q, std::move(T), std::move(X), std::move(Y), std::move(V));
    return 0;
}
