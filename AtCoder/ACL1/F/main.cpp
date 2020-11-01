#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> A, std::vector<long long> B){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(3*N);
    for(int i = 0 ; i < 3*N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(3*N);
    for(int i = 0 ; i < 3*N ; i++){
        scanf("%lld",&B[i]);
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
