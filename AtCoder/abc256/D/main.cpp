#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> L, std::vector<long long> R){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> L(N);
    std::vector<long long> R(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &L[i]);
        std::scanf("%lld", &R[i]);
    }
    solve(N, std::move(L), std::move(R));
    return 0;
}