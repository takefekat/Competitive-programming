#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> A){

    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());
    

    ll ans = A[0];
    for(ll i=1; i<N-1; i++) {
        ans += A[(i+1)/2];
    }
    cout << ans << endl;
    
}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
