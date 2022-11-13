#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 3;
const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long Q, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, std::vector<long long> d, std::vector<long long> e){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> a(Q);
    std::vector<long long> b(Q);
    std::vector<long long> c(Q);
    std::vector<long long> d(Q);
    std::vector<long long> e(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &a[i]);
        std::scanf("%lld", &b[i]);
        std::scanf("%lld", &c[i]);
        std::scanf("%lld", &d[i]);
        std::scanf("%lld", &e[i]);
    }
    solve(N, Q, std::move(a), std::move(b), std::move(c), std::move(d), std::move(e));
    return 0;
}
