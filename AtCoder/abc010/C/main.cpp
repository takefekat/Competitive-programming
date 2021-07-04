#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;


const string YES = "YES";
const string NO = "NO";

void solve(long long tx_a, long long ty_a, long long tx_b, long long ty_b, long long T, long long V, long long n, std::vector<long long> x, std::vector<long long> y){

}

int main(){
    long long tx_a;
    std::scanf("%lld", &tx_a);
    long long ty_a;
    std::scanf("%lld", &ty_a);
    long long tx_b;
    std::scanf("%lld", &tx_b);
    long long ty_b;
    std::scanf("%lld", &ty_b);
    long long T;
    std::scanf("%lld", &T);
    long long V;
    std::scanf("%lld", &V);
    long long n;
    std::scanf("%lld", &n);
    std::vector<long long> x(n);
    std::vector<long long> y(n);
    for(int i = 0 ; i < n ; i++){
        std::scanf("%lld", &x[i]);
        std::scanf("%lld", &y[i]);
    }
    solve(tx_a, ty_a, tx_b, ty_b, T, V, n, std::move(x), std::move(y));
    return 0;
}
