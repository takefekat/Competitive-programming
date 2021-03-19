#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const long long MOD = 998244353;

void solve(long long H, long long W, std::vector<std::string> A){

}

int main(){
    long long H;
    scanf("%lld",&H);
    long long W;
    scanf("%lld",&W);
    std::vector<std::string> A(H);
    for(int i = 0 ; i < H ; i++){
        std::cin >> A[i];
    }
    solve(H, W, std::move(A));
    return 0;
}
