#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void solve(long long A, long long B) { cout << max(0LL, B - A + 1) << endl; }

int main() {
    long long A;
    std::scanf("%lld", &A);
    long long B;
    std::scanf("%lld", &B);
    solve(A, B);
    return 0;
}
