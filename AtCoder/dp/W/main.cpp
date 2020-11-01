#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long M, std::vector<long long> l, std::vector<long long> r, std::vector<long long> a){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> l(M);
    std::vector<long long> r(M);
    std::vector<long long> a(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&l[i]);
        scanf("%lld",&r[i]);
        scanf("%lld",&a[i]);
    }
    solve(N, M, std::move(l), std::move(r), std::move(a));
    return 0;
}
