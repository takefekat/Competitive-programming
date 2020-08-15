#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<std::string> S){
    unordered_map<string,ll> um;
    um["AC"] = 0;
    um["WA"] = 0; 
    um["TLE"] = 0;
    um["RE"] = 0;
    for(auto &&elm : S) {
        um[elm]++;
    }
    cout << "AC x " << um["AC"] << endl;
    cout << "WA x " << um["WA"] << endl;
    cout << "TLE x " << um["TLE"] << endl;
    cout << "RE x " << um["RE"] << endl;

}

signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, std::move(S));
    return 0;
}
