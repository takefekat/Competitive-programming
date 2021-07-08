#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const string YES = "Yes";
const string NO = "No";

void solve(long long H, long long W, std::vector<std::vector<long long>> A, std::vector<std::vector<long long>> B){

}

int main(){
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    std::vector<std::vector<long long>> A(H, std::vector<long long>(W));
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            std::scanf("%lld", &A[i][j]);
        }
    }
    std::vector<std::vector<long long>> B(H, std::vector<long long>(W));
    for(int i = 0 ; i < H ; i++){
        for(int j = 0 ; j < W ; j++){
            std::scanf("%lld", &B[i][j]);
        }
    }
    solve(H, W, std::move(A), std::move(B));
    return 0;
}
