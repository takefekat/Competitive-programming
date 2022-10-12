#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

// digit: 3 2 0
void dfs(vector<ll>& digit, ll i, ll sum) {
    if(digit.size() == i){
        cout << sum << endl;
        return;
    }
    // digit[i]を使わない場合
    dfs(digit, i+1, sum);

    // digit[i]を使う場合
    dfs(digit, i+1, sum + (1LL<<digit[i]));
}


int main(){
    ll N;
    cin >> N;

    if(N==0){
        cout << 0 << endl;
        return 0;
    }

    vector<ll> digit_1;
    for (ll i = 0; i < 62 && N > 0; i++) {    
        if( (N & 1) == 1 ) { // 一番右のbitが1かどうかを調べる
            digit_1.push_back(i);
            // cout << i << endl;
        }
        N = (N >> 1); // 1101 -> 110 -> 11 -> 1 -> 0
    }
    reverse(digit_1.begin(), digit_1.end());
    dfs(digit_1, 0, 0);

    return 0;
}
