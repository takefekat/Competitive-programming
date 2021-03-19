#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(string N, long long K){

    string a = N;
    for(ll i=0; i<K; i++) {
        sort(a.begin(),a.end());
        ll g2 = stoll(a);
        reverse(a.begin(),a.end());
        ll g1 = stoll(a);
        ll f = g1 - g2;
        a = to_string(f);
        
    }
    cout << a << endl;
}

int main(){
    string N;
    cin >> N;
    long long K;
    scanf("%lld",&K);
    solve(N, K);
    return 0;
}
