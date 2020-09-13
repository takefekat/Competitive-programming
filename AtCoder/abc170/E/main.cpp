#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long Q, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(Q);
    std::vector<long long> D(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&C[i]);
        scanf("%lld",&D[i]);
    }
    solve(N, Q, std::move(A), std::move(B), std::move(C), std::move(D));
    return 0;
}
