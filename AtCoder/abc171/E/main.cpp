#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> a){
    ll sum=0;
    for(auto &&elm : a) {
        sum ^= elm;
    }
    for(ll i=0; i<N; i++) {
        cout << (a[i]^sum);
        cout << (i==N-1?"\n":" ");
    }
}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
    }
    solve(N, std::move(a));
    return 0;
}
