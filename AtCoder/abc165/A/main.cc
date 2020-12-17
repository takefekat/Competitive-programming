#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll K, A, B;
    cin >> K >> A >> B;

    string ans = "NG";
    for (ll i = A; i <= B; i++)
    {
        if (i % K == 0)
        {
            ans = "OK";
        }
    }

    cout << ans << endl;
}