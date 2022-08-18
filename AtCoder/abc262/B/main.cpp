#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using edge = pair<ll, ll>;
// {1,2} != {2,1}

int main() {
    ll N, M;
    cin >> N >> M;

    vector<ll> U(M);
    vector<ll> V(M);

    set<edge> e;
    for(int i = 0; i < M; i++) {
        cin >> U[i] >> V[i];
        U[i]--;
        V[i]--;
        e.insert(edge(U[i], V[i]));
        e.insert(edge(V[i], U[i]));
    }

    ll ans = 0;
    for(ll a = 0; a < N; a++) {              // 100
        for(ll b = a + 1; b < N; b++) {      // 100
            for(ll c = b + 1; c < N; c++) {  // 100
                if(e.count(edge(a, b)) == 1 and e.count(edge(b, c)) == 1 and
                   e.count(edge(c, a)) == 1)
                    ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
