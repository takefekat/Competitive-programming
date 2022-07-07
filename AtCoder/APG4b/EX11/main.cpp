#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long A, std::vector<std::string> op, std::vector<long long> B){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long A;
    std::scanf("%lld", &A);
    std::vector<std::string> op(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> op[i];
        std::scanf("%lld", &B[i]);
    }
    solve(N, A, std::move(op), std::move(B));
    return 0;
}
