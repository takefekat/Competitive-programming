#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long n, long long m, long long s, long long t, std::vector<long long> u, std::vector<long long> v, std::vector<long long> a, std::vector<long long> b){

}

int main(){
    long long n;
    scanf("%lld",&n);
    long long m;
    scanf("%lld",&m);
    long long s;
    scanf("%lld",&s);
    long long t;
    scanf("%lld",&t);
    std::vector<long long> u(m);
    std::vector<long long> v(m);
    std::vector<long long> a(m);
    std::vector<long long> b(m);
    for(int i = 0 ; i < m ; i++){
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    solve(n, m, s, t, std::move(u), std::move(v), std::move(a), std::move(b));
    return 0;
}
