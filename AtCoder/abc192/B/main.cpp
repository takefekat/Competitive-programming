#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const string YES = "Yes";
const string NO = "No";

void solve(std::string S){
    bool ans = true;
    for(ll i=0; i<S.size(); i++) {
        if(i%2){
            if(toupper(S[i]) != S[i])
                ans = false;
        }else{
            if(tolower(S[i]) != S[i])
                ans = false;
        }
    }
    if(ans)
        cout << YES << endl;
    else
        cout << NO << endl;
}

int main(){
    std::string S;
    std::cin >> S;
    solve(S);
    return 0;
}
