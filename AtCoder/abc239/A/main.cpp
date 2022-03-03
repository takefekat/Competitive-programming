#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long H) { printf("%.10lf\n", sqrt((12800000 + H) * H)); }

int main() {
    long long H;
    std::scanf("%lld", &H);
    solve(H);
    return 0;
}
