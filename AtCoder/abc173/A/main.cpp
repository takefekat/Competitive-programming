#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N){
    if(N%1000 == 0)
        cout << 0 << endl;
    else
        cout << 1000-N%1000 << endl;
}

signed main(){
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
