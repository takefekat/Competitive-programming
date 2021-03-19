#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const string YES = "Yes";
const string NO = "No";

void solve(long long V, long long T, long long S, long long D){
    string ans = YES;
    if(V*T <= D and D <= V*S )
    ans = NO;
    cout << ans << endl;
    
}

int main(){
    long long V;
    scanf("%lld",&V);
    long long T;
    scanf("%lld",&T);
    long long S;
    scanf("%lld",&S);
    long long D;
    scanf("%lld",&D);
    solve(V, T, S, D);
    return 0;
}
