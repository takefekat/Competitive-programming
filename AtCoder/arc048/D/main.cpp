#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long N, long long Q, std::vector<long long> A, std::vector<long long> B, std::string S, std::vector<long long> s, std::vector<long long> t){

}

int main(){
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> A(N-1);
    std::vector<long long> B(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    std::string S;
    std::cin >> S;
    std::vector<long long> s(Q);
    std::vector<long long> t(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&s[i]);
        scanf("%lld",&t[i]);
    }
    solve(N, Q, std::move(A), std::move(B), S, std::move(s), std::move(t));
    return 0;
}
