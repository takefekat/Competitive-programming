#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 7;

void solve(long long N, long long P, long long Q, std::vector<long long> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long P;
    std::scanf("%lld", &P);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, P, Q, std::move(A));
    return 0;
}
