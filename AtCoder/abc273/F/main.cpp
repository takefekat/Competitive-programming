#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long X, std::vector<long long> Y, std::vector<long long> Z){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long X;
    std::scanf("%lld", &X);
    std::vector<long long> Y(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &Y[i]);
    }
    std::vector<long long> Z(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &Z[i]);
    }
    solve(N, X, std::move(Y), std::move(Z));
    return 0;
}
