#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long M, std::vector<std::vector<long long>> A, std::vector<std::vector<long long>> B){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(M));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            scanf("%lld",&A[i][j]);
        }
    }
    std::vector<std::vector<long long>> B(N, std::vector<long long>(M));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            scanf("%lld",&B[i][j]);
        }
    }
    solve(N, M, std::move(A), std::move(B));
    return 0;
}
