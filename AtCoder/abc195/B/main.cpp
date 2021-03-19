#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long A, long long B, long long W) {
    W *= 1000;
    ll mi = (W + B - 1) / B;
    ll ma = W / A;
    if (A <= W - W / A * A and W - W / A * A <= B) ma++;

    if (ma == 0)
        cout << "UNSATISFIABLE" << endl;
    else
        cout << mi << " " << ma << endl;
}

int main() {
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long W;
    scanf("%lld", &W);
    solve(A, B, W);
    return 0;
}
