#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long K, std::vector<long long> p){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    std::vector<long long> p(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &p[i]);
    }
    solve(N, K, std::move(p));
    return 0;
}
