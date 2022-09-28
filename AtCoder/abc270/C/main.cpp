#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long X, long long Y, std::vector<long long> U, std::vector<long long> V){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long X;
    std::scanf("%lld", &X);
    long long Y;
    std::scanf("%lld", &Y);
    std::vector<long long> U(N-1);
    std::vector<long long> V(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &U[i]);
        std::scanf("%lld", &V[i]);
    }
    solve(N, X, Y, std::move(U), std::move(V));
    return 0;
}
