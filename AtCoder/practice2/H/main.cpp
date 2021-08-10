#include <bits/stdc++.h>
#include <ac-library/all>
using namespace atcoder;
using namespace std;

using ll = long long;
using ld = long double;
using vll = vector<ll>
using vvll = vector<vll>;

#define rep(i,n) for(int i=0; i<(int)(n),i++)
#define all(x) (x).begin(),(x).end() 

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long D, std::vector<long long> X, std::vector<long long> Y){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long D;
    std::scanf("%lld", &D);
    std::vector<long long> X(N);
    std::vector<long long> Y(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &X[i]);
        std::scanf("%lld", &Y[i]);
    }
    solve(N, D, std::move(X), std::move(Y));
    return 0;
}
