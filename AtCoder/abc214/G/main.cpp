#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define all(x) (x).begin(),(x).end() 


const long long MOD = 1000000007;

void solve(long long N, std::vector<long long> p, std::vector<long long> q){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> p(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &p[i]);
    }
    std::vector<long long> q(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &q[i]);
    }
    solve(N, std::move(p), std::move(q));
    return 0;
}
