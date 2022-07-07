#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(std::string N, long long M, std::vector<long long> C){

}

int main(){
    std::string N;
    std::cin >> N;
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> C(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &C[i]);
    }
    solve(N, M, std::move(C));
    return 0;
}
