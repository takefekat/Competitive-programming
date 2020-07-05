#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N){
    string ans = "";

    while(N!=0){
        N--;
        ans = char('a' + (N % 26)) + ans;
        N /= 26;
    }
    cout << ans << endl;

}

signed main(){
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
