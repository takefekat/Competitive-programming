#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, long long M, long long K, std::vector<long long> U, std::vector<long long> V){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> U(M);
    std::vector<long long> V(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &U[i]);
        std::scanf("%lld", &V[i]);
    }
    solve(N, M, K, std::move(U), std::move(V));
    return 0;
}
