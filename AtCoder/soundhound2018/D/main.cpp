#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long H, long long W, std::vector<std::vector<long long>> P, std::vector<std::vector<long long>> F){

}

int main(){
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    std::vector<std::vector<long long>> P(H, std::vector<long long>(W));
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            std::scanf("%lld", &P[i][j]);
        }
    }
    std::vector<std::vector<long long>> F(H, std::vector<long long>(W));
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            std::scanf("%lld", &F[i][j]);
        }
    }
    solve(H, W, std::move(P), std::move(F));
    return 0;
}
