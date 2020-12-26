#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> A(M);
    std::vector<long long> B(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
