#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()


void solve(std::string S){
    vector<string> yobi = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
    for (int i = 0; i < 5; i++)
    {
        if(yobi[i] == S){
            cout << 5-i << endl;
        }
    }
    
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
