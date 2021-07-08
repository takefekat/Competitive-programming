#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> lx, std::vector<long long> ly, std::vector<long long> rx, std::vector<long long> ry){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> lx(N);
    std::vector<long long> ly(N);
    std::vector<long long> rx(N);
    std::vector<long long> ry(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &lx[i]);
        std::scanf("%lld", &ly[i]);
        std::scanf("%lld", &rx[i]);
        std::scanf("%lld", &ry[i]);
    }
    solve(N, std::move(lx), std::move(ly), std::move(rx), std::move(ry));
    return 0;
}
