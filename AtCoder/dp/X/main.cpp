#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> w, std::vector<long long> s, std::vector<long long> v){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> w(N);
    std::vector<long long> s(N);
    std::vector<long long> v(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&w[i]);
        scanf("%lld",&s[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, std::move(w), std::move(s), std::move(v));
    return 0;
}
