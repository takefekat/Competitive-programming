#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";


int main(){
    ll N, M; cin >> N >> M;

    
    // human[i] : i番目の人が参加した舞踏会のリスト
    vector<set<ll>> human(N);
    for (ll i = 0; i < M; i++) {
        ll k; cin >> k;
        for (ll j = 0; j < k; j++) {
            ll x; cin >> x; x--;
            human[x].insert(i);
        }
    }
    
    // i番目の人とj番目の人が同じ舞踏会に参加したか調べる
    bool ans = true;
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < N; j++) {
            bool is_together = false;
            for(auto&& x : human[i]) {
                if (human[j].find(x) != human[j].end()) {
                    is_together = true;
                }
            }
            ans &= is_together;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
