#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(long long N, std::vector<long long> A){
    
    if (N == 2 && ((A[0] ^ A[1]) & 1) == 1 ){
        cout << -1 << endl;
        return;
    }
    
    vector<ll> even, odd;
    for(auto&& x : A) {
        if (x&1) odd.push_back(x);
        else     even.push_back(x);
        
    }
    
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    reverse(odd.begin(), odd.end());
    reverse(even.begin(), even.end());

    ll ans = -LONG_MIN;
    if(odd.size() >= 2) ans = max(ans, odd[0] + odd[1]);
    if(even.size() >= 2) ans = max(ans, even[0] + even[1]);
    
    cout << ans << endl;
    return;
}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
