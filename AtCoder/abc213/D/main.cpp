#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define all(x) (x).begin(),(x).end() 



void solve(long long N, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N-1);
    std::vector<long long> B(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    solve(N, std::move(A), std::move(B));
    return 0;
}
