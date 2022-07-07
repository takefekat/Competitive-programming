#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const long long MOD = 1000000007;

void solve(long long n, std::vector<long long> a){

}

int main(){
    long long n;
    std::scanf("%lld", &n);
    std::vector<long long> a(n+1);
    for(int i = 0 ; i < n+1 ; i++){
        std::scanf("%lld", &a[i]);
    }
    solve(n, std::move(a));
    return 0;
}
