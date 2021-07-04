#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> C, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&C[i]);
    }
    std::vector<long long> A(N-1);
    std::vector<long long> B(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    solve(N, std::move(C), std::move(A), std::move(B));
    return 0;
}
