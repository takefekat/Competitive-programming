#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> C, std::vector<long long> X){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &C[i]);
    }
    std::vector<long long> X(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &X[i]);
    }
    solve(N, std::move(C), std::move(X));
    return 0;
}
