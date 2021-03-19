#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ll N;
    cin >> N;

    vll A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    vll sum(N);
    sum[0] = A[0];
    for (ll i = 1; i < N; i++) sum[i] = sum[i - 1] + A[i];
    vll psum(N);
    psum[0] = A[0] * A[0];
    for (ll i = 1; i < N; i++) psum[i] = psum[i - 1] + A[i] * A[i];

    ll ans = 0;
    for (ll i = 1; i < N; i++) {
        ans += i * A[i] * A[i];
        ans -= 2 * A[i] * sum[i - 1];
        ans += psum[i - 1];
    }
    cout << ans << endl;
}
