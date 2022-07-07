#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &B[i]);
    }
    std::vector<long long> C(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &C[i]);
    }
    std::vector<long long> D(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &D[i]);
    }
    solve(N, M, std::move(A), std::move(B), std::move(C), std::move(D));
    return 0;
}
