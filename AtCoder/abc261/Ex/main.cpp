#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, long long v, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long v;
    std::scanf("%lld", &v);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    std::vector<long long> C(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
        std::scanf("%lld", &C[i]);
    }
    solve(N, M, v, std::move(A), std::move(B), std::move(C));
    return 0;
}
