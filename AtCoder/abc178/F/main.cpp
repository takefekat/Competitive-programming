#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<long long> A, std::vector<long long> B){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&B[i]);
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
