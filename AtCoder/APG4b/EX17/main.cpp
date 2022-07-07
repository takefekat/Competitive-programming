#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, long long S, std::vector<long long> A, std::vector<long long> P){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long S;
    std::scanf("%lld", &S);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &P[i]);
    }
    solve(N, S, std::move(A), std::move(P));
    return 0;
}
