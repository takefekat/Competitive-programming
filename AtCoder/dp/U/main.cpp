#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<std::vector<long long>> a){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::vector<long long>> a(N, std::vector<long long>(N));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            scanf("%lld",&a[i][j]);
        }
    }
    solve(N, std::move(a));
    return 0;
}
