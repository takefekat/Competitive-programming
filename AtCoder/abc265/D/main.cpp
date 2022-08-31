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

void solve(long long N, long long P, long long Q, long long R, std::vector<long long> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long P;
    std::scanf("%lld", &P);
    long long Q;
    std::scanf("%lld", &Q);
    long long R;
    std::scanf("%lld", &R);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, P, Q, R, std::move(A));
    return 0;
}
