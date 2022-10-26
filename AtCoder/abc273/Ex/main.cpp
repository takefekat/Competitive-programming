#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;

void solve(long long N, std::vector<long long> a, std::vector<long long> b){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> a(N);
    std::vector<long long> b(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
    }
    solve(N, std::move(a), std::move(b));
    return 0;
}
