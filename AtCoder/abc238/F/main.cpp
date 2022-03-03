#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, long long K, std::vector<long long> P, std::vector<long long> Q){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &P[i]);
    }
    std::vector<long long> Q(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &Q[i]);
    }
    solve(N, K, std::move(P), std::move(Q));
    return 0;
}
