#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, std::vector<long long> l, std::vector<long long> r){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> l(N);
    std::vector<long long> r(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &l[i]);
        std::scanf("%lld", &r[i]);
    }
    solve(N, std::move(l), std::move(r));
    return 0;
}
