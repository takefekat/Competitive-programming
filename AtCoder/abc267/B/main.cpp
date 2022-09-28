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

void solve(std::string S){
    string ans = NO;
    vector<vector<char>> pi(7);
    for (ll i = 2; i <= 10; i++) {
        if (i==7)           pi[0].push_back(S[i-1]);
        if (i==4)           pi[1].push_back(S[i-1]);
        if (i==8 || i==2)   pi[2].push_back(S[i-1]);
        if (i==5)           pi[3].push_back(S[i-1]);
        if (i==9 || i==3)   pi[4].push_back(S[i-1]);
        if (i==6)           pi[5].push_back(S[i-1]);
        if (i==10)          pi[6].push_back(S[i-1]);
    }
    if(S[0] != '1') {
        for (ll i = 0; i < 5; i++) {
            bool on = false;
            for(char x : pi[i]) if(x=='1') on = true;
            if(on == false) continue;

            bool next_off = true;
            for(char x : pi[i+1]) if(x=='1') next_off = false;
            if(next_off == false) continue;

            for (ll j = i+2; j < 7; j++) {
                bool split = false;
                for(char x : pi[j]) if(x=='1') split = on;
                if(split == false) continue;
                
                cout << YES << endl;
                return;
            }
        }
    }
    cout << NO << endl;
    return;
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
