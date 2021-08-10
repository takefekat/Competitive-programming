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


void solve(long long N, long long M, std::vector<std::string> S){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, M, std::move(S));
    return 0;
}
