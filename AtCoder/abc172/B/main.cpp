#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(std::string S, std::string T){

ll cnt = 0;
    for (size_t i = 0; i < S.size(); i++)
    {
        if(S[i]!=T[i])
            cnt++;
    }
    cout << cnt << endl;

}

signed main(){
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    solve(S, T);
    return 0;
}
