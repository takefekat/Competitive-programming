#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

// 長さ N の 1 ~ M 以下の狭義短調増加の数列を列挙
void search(ll n, ll M, ll sel_max, vll& tmp, vvll& res, vll& used){
    if(n==0) {
        res.push_back(tmp);
        return;
    }

    for(ll i=sel_max+1; i<=M; i++){
        // 一度使用したものは使わない
        if(used[i-1] == 1) continue; 

        // iを使用した場合
        tmp.push_back(i);
        used[i-1] = 1;
        search(n-1, M, max(sel_max, i), tmp, res, used);

        // 次の探索のために消去
        used[i-1] = 0;
        tmp.pop_back();
    }
    return;
}

void solve(long long N, long long M){

    vvll ans;
    vll tmp;
    vll used(10,0);
    search(N, M, 0, tmp, ans,used);

    sort(all(ans));
    for(auto v : ans){
        for(ll i=0; i<N; i++){
            printf("%d",v[i]);
            if(i==N-1) 
                printf("\n");
            else 
                printf(" ");
        }    
    }

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    long long M;
    std::scanf("%lld", &M);
    solve(N, M);
    return 0;
}
