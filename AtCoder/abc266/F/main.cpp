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

void solve(long long N, std::vector<long long> u, std::vector<long long> v, long long Q, std::vector<long long> x, std::vector<long long> y){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> u(N);
    std::vector<long long> v(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &u[i]);
        std::scanf("%lld", &v[i]);
    }
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> x(Q);
    std::vector<long long> y(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    solve(N, std::move(u), std::move(v), Q, std::move(x), std::move(y));
    return 0;
}
