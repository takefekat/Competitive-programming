#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 998244353;

void solve(long long N, std::string X, std::vector<long long> A){

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::string X;
    std::cin >> X;
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, X, std::move(A));
    return 0;
}
