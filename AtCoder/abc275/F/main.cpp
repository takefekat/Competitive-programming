#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long M, std::vector<long long> a){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &a[i]);
    }
    solve(N, M, std::move(a));
    return 0;
}
