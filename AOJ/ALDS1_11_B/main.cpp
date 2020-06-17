#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<vector<ll>> graph;

ll dfs(graph &G, vector<ll>&d, vector<ll>&f, ll node, ll count){

    if(d[node] != -1) return count;

    d[node] = count;
    count ++;

    for(ll tar : G[node]){
        if( d[tar] == -1 ){
            count = dfs(G, d, f, tar, count);
        }
    }

    f[node] = count;
    count ++;

    return count;

}


int main(){

    ll N;
    cin >> N;

    graph G(N);
    for (int i = 0; i < N; i++)
    {
        ll u,k;
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            ll v;
            cin >> v;
            G[u-1].push_back(v-1);
        }
    }

    vector<ll> d(N,-1),f(N,-1);

    ll count = 1;
    for (ll i = 0; i < N; i++)
    {
       count = dfs(G,d,f,i,count);
    }

    for (int i = 0; i < N; i++)
    {
        cout << i+1 << " " << d[i] << " " << f[i] <<endl;
    }
    
}