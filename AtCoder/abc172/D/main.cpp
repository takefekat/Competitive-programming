#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(long long N){

    vector<ll> sum_yaku(N+1,1);
    sum_yaku[0] = 0;
    sum_yaku[1] = 1;
    for (size_t i = 2; i <= N; i++)
    {
        for (size_t j = 1; i*j<=N; j++)
        {
            sum_yaku[i*j]++;
        }
    }
    
    ll ans = 0;
    for (size_t i = 0; i <= N; i++)
    {
        ans += i*sum_yaku[i];
    }
    
    cout << ans << endl;
    
}

signed main(){
    long long N;
    scanf("%lld",&N);
    solve(N);
    return 0;
}
