#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> A, long long Q, std::vector<long long> B){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> B(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &B[i]);
    }
    solve(N, std::move(A), Q, std::move(B));
    return 0;
}
