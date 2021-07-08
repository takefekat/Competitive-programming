#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 1000000007;

void solve(long long N, std::vector<std::vector<long long>> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(6));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < 6 ; j++){
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(N, std::move(A));
    return 0;
}
