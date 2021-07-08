#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long T, long long L, long long X, long long Y, long long Q, std::vector<long long> E){

}

int main(){
    long long T;
    std::scanf("%lld", &T);
    long long L;
    std::scanf("%lld", &L);
    long long X;
    std::scanf("%lld", &X);
    long long Y;
    std::scanf("%lld", &Y);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> E(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &E[i]);
    }
    solve(T, L, X, Y, Q, std::move(E));
    return 0;
}
