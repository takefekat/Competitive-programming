#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(std::string S){

    int ans = 0,rain=0;;
    for(auto &&e : S) {
        if( e == 'R'){
            rain++;
            ans = max(rain,ans);
        }
        else{
            rain=0;
        }
            
    }
cout << ans << endl;

}

signed main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
