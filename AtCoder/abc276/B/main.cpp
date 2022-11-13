#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll N, M; 
    cin >> N >> M;

    vector<vector<ll>> al(N);
    for (ll i = 0; i < M; i++) {
        ll a, b;
        cin >> a >> b;
        al[a-1].push_back(b);
        al[b-1].push_back(a);
    }
    for (ll i = 0; i < N; i++) {
        sort(al[i].begin(), al[i].end());
    }
    
    
    for (ll i = 0; i < N; i++) {
        cout << al[i].size();
        cout << (al[i].size() == 0 ? "\n" : " ");
        for (ll j = 0; j < al[i].size(); j++) {
            cout << al[i][j];
            cout << (j == al[i].size()-1 ? "\n" : " ");
        }    
    }
    
    return 0;
}
