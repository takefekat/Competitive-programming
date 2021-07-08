#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long T, std::vector<long long> AX, std::vector<long long> AY, std::vector<long long> BX, std::vector<long long> BY){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long T;
    std::scanf("%lld", &T);
    std::vector<long long> AX(N);
    std::vector<long long> AY(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &AX[i]);
        std::scanf("%lld", &AY[i]);
    }
    std::vector<long long> BX(N);
    std::vector<long long> BY(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &BX[i]);
        std::scanf("%lld", &BY[i]);
    }
    solve(N, T, std::move(AX), std::move(AY), std::move(BX), std::move(BY));
    return 0;
}
