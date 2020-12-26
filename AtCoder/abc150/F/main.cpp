#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> a, std::vector<long long> b){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> a(N-1-0+1);
    for(int i = 0 ; i < N-1-0+1 ; i++){
        scanf("%lld",&a[i]);
    }
    std::vector<long long> b(N-1-0+1);
    for(int i = 0 ; i < N-1-0+1 ; i++){
        scanf("%lld",&b[i]);
    }
    solve(N, std::move(a), std::move(b));
    return 0;
}
