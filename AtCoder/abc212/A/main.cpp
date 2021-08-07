#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long A, long long B) {
    if (A == 0)
        cout << "Silver" << endl;
    else if (B == 0)
        cout << "Gold" << endl;
    else
        cout << "Alloy" << endl;
}

int main() {
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    solve(A, B);
    return 0;
}
