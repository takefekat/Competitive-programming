#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long H, long long W, std::vector<long long> A, std::vector<long long> B){

}

signed main(){
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    std::vector<long long> A(H);
    std::vector<long long> B(H);
    for(int i = 0 ; i < H ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    solve(H, W, std::move(A), std::move(B));
    return 0;
}
