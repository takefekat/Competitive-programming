#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
using pll = pair<ll,ll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";

bool is_eikaku(pll a, pll b, pll c){
    if ( (b.first - a.first) * (c.second - b.second) - (b.second - a.second) * (c.first - b.first) > 0 ){
        return true;
    }else{
        return false;
    }

}

int main(){
    vector<pll> p(4);
    for (int  i = 0; i < 4; i++)        cin >> p[i].first >> p[i].second;
    if ( is_eikaku(p[0], p[1], p[2]) && is_eikaku( p[1], p[2], p[3]) &&  is_eikaku(p[2], p[3], p[0]) &&  is_eikaku(p[3], p[0], p[1]) ){
        cout << YES << endl;
    }
    else{
        cout << NO << endl;
    }

    
    return 0;
}
