#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long D, std::vector<long long> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long D;
    std::scanf("%lld", &D);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, D, std::move(A));
    return 0;
}
