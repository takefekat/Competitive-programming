#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long n, long long m, std::vector<long long> u, std::vector<long long> v, std::vector<long long> s){

}

int main(){
    long long n;
    scanf("%lld",&n);
    long long m;
    scanf("%lld",&m);
    std::vector<long long> u(m);
    std::vector<long long> v(m);
    std::vector<long long> s(m);
    for(int i = 0 ; i < m ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
        scanf("%lld",&s[i]);
    }
    solve(n, m, std::move(u), std::move(v), std::move(s));
    return 0;
}
