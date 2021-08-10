#include <bits/stdc++.h>
#include <ac-library/all>
using namespace atcoder;
using namespace std;

using ll = long long;
using ld = long double;
using vll = vector<ll>
using vvll = vector<vll>;

#define rep(i,n) for(int i=0; i<(int)(n),i++)
#define all(x) (x).begin(),(x).end() 


void solve(long long N, long long K, std::vector<std::vector<long long>> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<std::vector<long long>> A(N, std::vector<long long>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(N, K, std::move(A));
    return 0;
}
