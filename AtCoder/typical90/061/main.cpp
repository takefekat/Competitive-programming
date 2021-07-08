#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long Q, std::vector<long long> t, std::vector<long long> x){

}

int main(){
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> t(Q);
    std::vector<long long> x(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &t[i]);
        std::scanf("%lld", &x[i]);
    }
    solve(Q, std::move(t), std::move(x));
    return 0;
}
