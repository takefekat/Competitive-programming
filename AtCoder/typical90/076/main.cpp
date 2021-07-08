#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<long long> A){

}

int main(){
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        std::scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
