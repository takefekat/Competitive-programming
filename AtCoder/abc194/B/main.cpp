#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ll N;
    cin >> N;

    vll A(N), B(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    ll ans = 1LL << 60;

    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < N; j++) {
            if (i == j)
                ans = min(ans, A[i] + B[i]);
            else
                ans = min(ans, max(A[i], B[j]));
        }
    }
    cout << ans << endl;
}