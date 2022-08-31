#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, long long D, std::vector<long long> p, std::vector<long long> q){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long D;
    std::scanf("%lld", &D);
    std::vector<long long> p(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &p[i]);
    }
    std::vector<long long> q(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &q[i]);
    }
    solve(N, D, std::move(p), std::move(q));
    return 0;
}
