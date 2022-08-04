#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long S, long long T, long long M, std::vector<long long> u, std::vector<long long> v){

}

int main(){
    long long S;
    std::scanf("%lld", &S);
    long long T;
    std::scanf("%lld", &T);
    long long M;
    std::scanf("%lld", &M);
    std::vector<long long> u(M);
    std::vector<long long> v(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
    }
    solve(S, T, M, std::move(u), std::move(v));
    return 0;
}
