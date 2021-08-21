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



void solve(long long H, long long W, long long N, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    solve(H, W, N, std::move(A), std::move(B));
    return 0;
}
