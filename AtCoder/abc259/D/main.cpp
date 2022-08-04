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

void solve(long long N, long long s_x, long long s_y, long long t_x, long long t_y, std::vector<long long> x, std::vector<long long> y, std::vector<long long> r){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long s_x;
    std::scanf("%lld", &s_x);
    long long s_y;
    std::scanf("%lld", &s_y);
    long long t_x;
    std::scanf("%lld", &t_x);
    long long t_y;
    std::scanf("%lld", &t_y);
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    std::vector<long long> r(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
        std::scanf("%lld", &r[i]);
    }
    solve(N, s_x, s_y, t_x, t_y, std::move(x), std::move(y), std::move(r));
    return 0;
}
