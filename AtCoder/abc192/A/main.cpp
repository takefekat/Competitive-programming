#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long X){
    cout << (X+100)/100*100 - X << endl;
}

int main(){
    long long X;
    scanf("%lld",&X);
    solve(X);
    return 0;
}
