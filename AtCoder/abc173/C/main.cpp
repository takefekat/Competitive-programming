#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(ll H, ll i, vector<int>&Hb, ll W, ll j, vector<int>&Wb, ll K, vector<string>& c){

    // 終了条件
    if( i==H and j==W ){
        int cnt = 0;
        for(ll ik=0; ik<H; ik++) {
            for(ll jk=0; jk<W; jk++) {
                if( Hb[ik] == 0 and Wb[jk] == 0 and c[ik][jk] == '#'){
                    cnt++;
                }
            }
        }
        if(cnt == K) {
            return 1;
        }
        else {
            return 0;
        }
    }

    int ans = 0;
    if( i<H ){
        Hb[i] = 0;                  // 選択しない
        ans += solve(H,i+1,Hb,W,j,Wb,K,c);
        Hb[i] = 1;                  // 選択する
        ans += solve(H,i+1,Hb,W,j,Wb,K,c);
    }
    else{
        Wb[j] = 0;
        ans += solve(H,i,Hb,W,j+1,Wb,K,c);
        Wb[j] = 1;
        ans += solve(H,i,Hb,W,j+1,Wb,K,c);
    }
    return ans;

}


signed main(){
    
    ll H,W,K;
    cin >> H >> W >> K;

    vector<string> c;
    for(ll i=0; i<H; i++) {
        string s; cin >> s;
        c.push_back(s)    ;
    }
    vector<int> Hb(H,0),Wb(W,0);
    cout << solve(H, 0, Hb, W, 0, Wb, K, c) << endl;

    return 0;
}
