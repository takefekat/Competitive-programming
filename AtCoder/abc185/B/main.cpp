#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

const string YES = "Yes";
const string NO = "No";

signed main()
{

    ll N, M, T;
    cin >> N >> M >> T;

    vll A(M), B(M);
    for (ll i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
    }

    ll vol = N;
    ll time = 0;
    string ans = YES;
    for (ll i = 0; i < M; i++)
    {
        vol -= A[i] - time;
        if (vol <= 0)
        {
            ans = NO;
            break;
        }

        vol += B[i] - A[i];
        vol = min(N, vol);

        time = B[i];
    }
    vol -= T - time;
    if (vol <= 0)
        ans = NO;
    cout << ans << endl;
    return 0;
}
