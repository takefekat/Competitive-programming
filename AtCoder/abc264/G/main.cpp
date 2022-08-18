#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<std::string> T, std::vector<long long> P){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<std::string> T(N);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> T[i];
        std::scanf("%lld", &P[i]);
    }
    solve(N, std::move(T), std::move(P));
    return 0;
}
