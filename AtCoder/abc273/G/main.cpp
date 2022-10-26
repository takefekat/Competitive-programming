#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, std::vector<long long> R, std::vector<long long> C){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> R(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &R[i]);
    }
    std::vector<long long> C(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &C[i]);
    }
    solve(N, std::move(R), std::move(C));
    return 0;
}
