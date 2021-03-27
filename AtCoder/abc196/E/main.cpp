#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> a, std::vector<long long> t, long long Q, std::vector<long long> x){

}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> a(N);
    std::vector<long long> t(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&t[i]);
    }
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> x(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&x[i]);
    }
    solve(N, std::move(a), std::move(t), Q, std::move(x));
    return 0;
}
