#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
        std::scanf("%lld", &C[i]);
    }
    solve(N, std::move(A), std::move(B), std::move(C));
    return 0;
}
