#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main() {
    ll N;
    cin >> N;

    vector<string> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    string ans = "correct";
    for(ll i = 0; i < N; i++) {
        for(ll j = i + 1; j < N; j++) {
            if(A[i][j] == 'W' && A[j][i] != 'L') ans = "incorrect";
            if(A[i][j] == 'L' && A[j][i] != 'W') ans = "incorrect";
            if(A[i][j] == 'D' && A[j][i] != 'D') ans = "incorrect";
        }
    }
    cout << ans << endl;
    return 0;
}
