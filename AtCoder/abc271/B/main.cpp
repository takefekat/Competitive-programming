#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

/*
vector<ll> vec(N, 0); // 要素数N の初期値は0
vector<ll> vec(N);    // 要素数N の初期値は0

vector<vector<ll>> vec; // 何もない
vector<vector<ll>> vec(N); // N個のからのリスト
vector<vector<ll>> vec(N, vector<ll>(M,0)); // N個の、長さMの0初期化されたリスト
*/


int main(){
    ll N, Q; cin >> N >> Q;

    vector<vector<ll>> a(N);    // N個の空のリストを作成。
    for (ll i = 0; i < N; i++) {
        ll L; cin >> L;
        for (ll j = 0; j < L; j++) {
            ll tmp; cin >> tmp;
            a[i].push_back(tmp);    // a[i]の末尾にtmpを追加（要素数が増える）
        }
    }

    for (ll i = 0; i < Q; i++) {
        ll s, t; cin >> s >> t;
        cout << a[s-1][t-1] << endl;
    }
    
    

    return 0;
}
