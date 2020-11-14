#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long A, long long B, long long C, std::vector<std::string> s){

}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    long long C;
    scanf("%lld",&C);
    std::vector<std::string> s(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> s[i];
    }
    solve(N, A, B, C, std::move(s));
    return 0;
}
