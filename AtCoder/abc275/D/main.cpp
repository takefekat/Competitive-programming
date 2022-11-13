#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

// メモ化再帰（動的計画法の一つ）
ll f(ll k, map<ll,ll>& memo) {
    // 一度計算した場合は、その結果を再利用
    if (memo.find(k) != memo.end()) return memo[k];

    return memo[k] = f(k/2, memo) + f(k/3, memo);
}

int main(){
    ll N;
    cin >> N;

    map<ll,ll> dp; // key: x , val: f(x)
    dp[0] = 1;

    cout << f(N, dp) << endl;
    return 0;
}
