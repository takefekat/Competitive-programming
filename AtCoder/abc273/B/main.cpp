#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


int main(){
    ll N;
    ll K;
    cin >> N >> K;

    ll digit_mask = 1;
    for (ll i = 0; i < K; i++) {
        ll digit = (N / digit_mask) % 10; // 2048
        if( digit >= 5 ){
            N += digit_mask * 10;
        }
        N -= digit * digit_mask;
        digit_mask *= 10;
    }
    cout << N << endl;
    
    
    return 0;
}
