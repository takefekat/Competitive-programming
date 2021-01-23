#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> a, std::vector<long long> b, long long Q, std::vector<long long> t, std::vector<long long> e, std::vector<long long> x){

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> a(N-1);
    std::vector<long long> b(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> t(Q);
    std::vector<long long> e(Q);
    std::vector<long long> x(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&t[i]);
        scanf("%lld",&e[i]);
        scanf("%lld",&x[i]);
    }
    solve(N, std::move(a), std::move(b), Q, std::move(t), std::move(e), std::move(x));
    return 0;
}
