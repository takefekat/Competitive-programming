#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> u, std::vector<long long> v){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> u(N-1);
    std::vector<long long> v(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
    }
    solve(N, std::move(u), std::move(v));
    return 0;
}
