#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(std::vector<std::vector<long long>> A){

}

int main(){
    std::vector<std::vector<long long>> A(9, std::vector<long long>(9));
    for(int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            std::scanf("%lld", &A[i][j]);
        }
    }
    solve(std::move(A));
    return 0;
}
