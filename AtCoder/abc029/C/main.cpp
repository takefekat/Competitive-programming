#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void rec(string res, int idx, int N) {
    if (idx == N) {
        cout << res << endl;
        return;
    }
    rec(res + "a", idx + 1, N);
    rec(res + "b", idx + 1, N);
    rec(res + "c", idx + 1, N);
}

int main() {
    ll N;
    cin >> N;

    rec("", 0, N);
    return 0;
}
