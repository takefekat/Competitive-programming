#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long X, long long Y, long long A, long long B, long long C, std::vector<long long> p, std::vector<long long> q, std::vector<long long> r){

}

int main(){
    long long X;
    std::scanf("%lld", &X);
    long long Y;
    std::scanf("%lld", &Y);
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    long long C;
    std::scanf("%lld", &C);
    std::vector<long long> p(A);
    for(int i = 0 ; i < A ; i++){
        std::scanf("%lld", &p[i]);
    }
    std::vector<long long> q(B);
    for(int i = 0 ; i < B ; i++){
        std::scanf("%lld", &q[i]);
    }
    std::vector<long long> r(C);
    for(int i = 0 ; i < C ; i++){
        std::scanf("%lld", &r[i]);
    }
    solve(X, Y, A, B, C, std::move(p), std::move(q), std::move(r));
    return 0;
}
