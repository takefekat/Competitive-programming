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

void solve(long long N, long long x, long long y, std::vector<long long> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long x;
    std::scanf("%lld", &x);
    long long y;
    std::scanf("%lld", &y);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, x, y, std::move(A));
    return 0;
}
