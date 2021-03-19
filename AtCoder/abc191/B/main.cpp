#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


void solve(long long N, long long X, std::vector<long long> A){
    vll ans;
    for(auto &&e : A) {
        if( e != X )
            ans.push_back(e);
    }
    for(ll i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i==ans.size()-1)
            cout << endl;
        else
            cout << " ";
    }
}

int main(){
    long long N;
    scanf("%lld",&N);
    long long X;
    scanf("%lld",&X);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, X, std::move(A));
    return 0;
}
