#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> H){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> H(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &H[i]);
    }
    solve(N, std::move(H));
    return 0;
}
