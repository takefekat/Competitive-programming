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


void solve(long long T, std::vector<long long> N, std::vector<long long> M, std::vector<long long> A, std::vector<long long> B){

}

int main(){
    long long T;
    std::scanf("%lld", &T);
    std::vector<long long> N(T);
    std::vector<long long> M(T);
    std::vector<long long> A(T);
    std::vector<long long> B(T);
    for(int i = 0 ; i < T ; i++){
        std::scanf("%lld", &N[i]);
        std::scanf("%lld", &M[i]);
        std::scanf("%lld", &A[i]);
        std::scanf("%lld", &B[i]);
    }
    solve(T, std::move(N), std::move(M), std::move(A), std::move(B));
    return 0;
}
