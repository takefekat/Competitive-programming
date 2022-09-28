#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, long long M, long long Q, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> A(Q);
    std::vector<long long> B(Q);
    std::vector<long long> C(Q);
    std::vector<long long> D(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
        std::scanf("%lld", &C[i]);
        std::scanf("%lld", &D[i]);
    }
    solve(N, M, Q, std::move(A), std::move(B), std::move(C), std::move(D));
    return 0;
}
