#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long C, std::vector<long long> T, std::vector<long long> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long C;
    std::scanf("%lld", &C);
    std::vector<long long> T(N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &T[i]);
        std::scanf("%lld", &A[i]);
    }
    solve(N, C, std::move(T), std::move(A));
    return 0;
}
