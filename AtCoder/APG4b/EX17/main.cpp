#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long S, std::vector<long long> A, std::vector<long long> P){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long S;
    scanf("%lld",&S);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&P[i]);
    }
    solve(N, S, std::move(A), std::move(P));
    return 0;
}
