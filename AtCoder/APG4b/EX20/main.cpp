#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> p){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> p(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        std::scanf("%lld", &p[i]);
    }
    solve(N, std::move(p));
    return 0;
}
