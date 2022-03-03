#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

void solve(long long X) {
    if(X > 0)
        cout << (ll)X / 10 << endl;
    else
        cout << (X % 10 == 0 ? (ll)X / 10 : (ll)X / 10 - 1) << endl;
}

int main() {
    long long X;
    std::scanf("%lld", &X);
    solve(X);
    return 0;
}
