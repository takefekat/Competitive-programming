#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const string YES = "Yes";
const string NO = "No";

void solve(long long M, long long H) {
    cout << (H % M == 0 ? YES : NO) << endl;
}

int main() {
    long long M;
    scanf("%lld", &M);
    long long H;
    scanf("%lld", &H);
    solve(M, H);
    return 0;
}
