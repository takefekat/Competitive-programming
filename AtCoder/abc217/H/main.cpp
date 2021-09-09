#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define all(x) (x).begin(),(x).end() 



void solve(long long N, std::vector<long long> T, std::vector<long long> D, std::vector<long long> X){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> T(N);
    std::vector<long long> D(N);
    std::vector<long long> X(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &T[i]);
        std::scanf("%lld", &D[i]);
        std::scanf("%lld", &X[i]);
    }
    solve(N, std::move(T), std::move(D), std::move(X));
    return 0;
}
