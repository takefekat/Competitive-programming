#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<std::vector<long long>> A){

    

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(N, std::move(A));
    return 0;
}
