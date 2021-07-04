#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;



void solve(long long n, long long L, long long R, std::vector<long long> a){

}

int main(){
    long long n;
    std::scanf("%lld", &n);
    long long L;
    std::scanf("%lld", &L);
    long long R;
    std::scanf("%lld", &R);
    std::vector<long long> a(n);
    for(int i = 0 ; i < n ; i++){
        std::scanf("%lld", &a[i]);
    }
    solve(n, L, R, std::move(a));
    return 0;
}
