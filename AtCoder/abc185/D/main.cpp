#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

signed main()
{
    ll N, M;
    cin >> N >> M;
    if (M == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    vll A(M);
    for (ll i = 0; i < M; i++)
    {
        scanf("%lld", &A[i]);
    }
    sort(A.begin(), A.end());

    ll width = N;
    ll l = 0;
    for (ll i = 0; i < M; i++)
    {
        if (A[i] - l - 1 > 0)
            width = min(width, A[i] - l - 1);
        l = A[i];
    }
    if (N != A[M - 1])
        width = min(width, N - A[M - 1]);
    //cout << width << endl;

    ll ans = 0;
    l = 0;
    for (ll i = 0; i < M; i++)
    {
        if (A[i] - l - 1 > 0)
            ans += (A[i] - l - 1 + width - 1) / width;
        l = A[i];
    }
    if (N != A[M - 1])
        ans += (N - A[M - 1] + width - 1) / width;

    cout << ans << endl;

    return 0;
}
