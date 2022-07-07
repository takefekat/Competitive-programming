#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, std::vector<long long> W, std::vector<long long> L){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> W(M);
    std::vector<long long> L(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &W[i]);
        std::scanf("%lld", &L[i]);
    }
    solve(N, M, std::move(W), std::move(L));
    return 0;
}
