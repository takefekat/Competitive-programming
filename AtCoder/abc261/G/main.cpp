#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(std::string S, std::string T, long long K, std::vector<std::string> C, std::vector<std::string> A){

}

int main(){
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    long long K;
    std::scanf("%lld", &K);
    std::vector<std::string> C(K);
    std::vector<std::string> A(K);
    for(int i = 0 ; i < K ; i++){
        std::cin >> C[i];
        std::cin >> A[i];
    }
    solve(S, T, K, std::move(C), std::move(A));
    return 0;
}
