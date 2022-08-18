#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long Y) { cout << Y + ((4 - (Y % 4) + 2) % 4) << endl; }

int main() {
    long long Y;
    std::scanf("%lld", &Y);
    solve(Y);
    return 0;
}
