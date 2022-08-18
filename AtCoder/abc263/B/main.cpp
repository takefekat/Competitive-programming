#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> P){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> P(N-2+1);
    for(int i = 0 ; i < N-2+1 ; i++){
        std::scanf("%lld", &P[i]);
    }
    solve(N, std::move(P));
    return 0;
}
