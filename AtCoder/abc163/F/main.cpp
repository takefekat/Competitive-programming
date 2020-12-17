#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> c, std::vector<long long> a, std::vector<long long> b){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> c(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&c[i]);
    }
    std::vector<long long> a(N-1);
    std::vector<long long> b(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
    }
    solve(N, std::move(c), std::move(a), std::move(b));
    return 0;
}
