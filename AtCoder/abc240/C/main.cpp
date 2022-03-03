#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const string YES = "Yes";
const string NO = "No";

ll N, X;
vll a, b;
ll dp[110][10010] = {};

void rec(ll n, ll x) {
    if(x > X) return;
    if(n > N) return;
    if(dp[n][x] == 1) return;

    dp[n][x] = 1;
    rec(n + 1, x + a[n]);
    rec(n + 1, x + b[n]);
}

int main() {
    cin >> N >> X;
    b.assign(N, 0);
    a.assign(N, 0);
    for(ll i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }

    rec(0, 0);
    if(dp[N][X] == 0)
        cout << NO << endl;
    else
        cout << YES << endl;
}