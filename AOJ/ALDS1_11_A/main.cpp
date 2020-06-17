#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll N;
    cin >> N;

    vector<vector<ll> > G(N,vector<ll>(N,0));
    for (int i = 0; i < N; i++)
    {
        ll u,k;
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            ll v;
            cin >> v;
            G[u-1][v-1] = 1;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << G[i][j] ;
            if( j != N-1 )
                cout << " ";
        }
        cout << endl;
        
    }
    
    




}