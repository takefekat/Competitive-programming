#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string N, ans = "No";
    cin >> N;
    for (auto &&e : N) {
        if (e == '7') ans = "Yes";
    }
    cout << ans << endl;

    return 0;
}