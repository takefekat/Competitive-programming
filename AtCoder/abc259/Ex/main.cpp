#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, std::vector<std::vector<long long>> a){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::vector<long long>> a(N, std::vector<long long>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            std::scanf("%lld", &a[i][j]);
        }
    }
    solve(N, std::move(a));
    return 0;
}
