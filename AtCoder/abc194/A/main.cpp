#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ll A, B;
    cin >> A >> B;

    ll ans = 4;
    if (A + B >= 15 and B >= 8)
        ans = 1;
    else if (A + B >= 10 and B >= 3)
        ans = 2;
    else if (A + B >= 3)
        ans = 3;
    cout << ans << endl;
}