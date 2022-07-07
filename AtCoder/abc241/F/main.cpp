#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long H, long long W, long long N, long long s_x, long long s_y, long long g_x, long long g_y, std::vector<long long> X, std::vector<long long> Y){

}

int main(){
    long long H;
    std::scanf("%lld", &H);
    long long W;
    std::scanf("%lld", &W);
    long long N;
    std::scanf("%lld", &N);
    long long s_x;
    std::scanf("%lld", &s_x);
    long long s_y;
    std::scanf("%lld", &s_y);
    long long g_x;
    std::scanf("%lld", &g_x);
    long long g_y;
    std::scanf("%lld", &g_y);
    std::vector<long long> X(N);
    std::vector<long long> Y(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    solve(H, W, N, s_x, s_y, g_x, g_y, std::move(X), std::move(Y));
    return 0;
}
