#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long M, long long Q, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, std::vector<long long> u, std::vector<long long> v, std::vector<long long> w){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> a(M);
    std::vector<long long> b(M);
    std::vector<long long> c(M);
    for(int i = 0 ; i < M ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
        std::scanf("%lld", &c[i]);
    }
    std::vector<long long> u(Q);
    std::vector<long long> v(Q);
    std::vector<long long> w(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
        std::scanf("%lld", &w[i]);
    }
    solve(N, M, Q, std::move(a), std::move(b), std::move(c), std::move(u), std::move(v), std::move(w));
    return 0;
}
