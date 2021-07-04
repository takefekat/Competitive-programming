#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long A_x, long long A_y, long long B_x, long long B_y, long long N, std::vector<long long> X, std::vector<long long> Y){

}

int main(){
    long long A_x;
    scanf("%lld",&A_x);
    long long A_y;
    scanf("%lld",&A_y);
    long long B_x;
    scanf("%lld",&B_x);
    long long B_y;
    scanf("%lld",&B_y);
    long long N;
    scanf("%lld",&N);
    std::vector<long long> X(N);
    std::vector<long long> Y(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&X[i]);
        scanf("%lld",&Y[i]);
    }
    solve(A_x, A_y, B_x, B_y, N, std::move(X), std::move(Y));
    return 0;
}
