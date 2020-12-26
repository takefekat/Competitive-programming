#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long A, std::vector<std::string> op, std::vector<long long> B){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long A;
    scanf("%lld",&A);
    std::vector<std::string> op(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> op[i];
        scanf("%lld",&B[i]);
    }
    solve(N, A, std::move(op), std::move(B));
    return 0;
}
