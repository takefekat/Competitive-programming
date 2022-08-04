#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> d, std::vector<long long> u, std::vector<long long> v, std::vector<long long> w){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> d(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &d[i]);
    }
    std::vector<long long> u(N-1);
    std::vector<long long> v(N-1);
    std::vector<long long> w(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
        std::scanf("%lld", &w[i]);
    }
    solve(N, std::move(d), std::move(u), std::move(v), std::move(w));
    return 0;
}
