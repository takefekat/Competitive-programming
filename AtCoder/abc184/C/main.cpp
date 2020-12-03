#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(std::vector<long long> r, std::vector<long long> c)
{
    // 0
    if (r[0] == r[1] and c[0] == c[1])
    {
        cout << 0 << endl;
        return;
    }

    // 1
    if (r[0] + c[0] == r[1] + c[1] or r[0] - c[0] == r[1] - c[1] or abs(r[0] - r[1]) + abs(c[0] - c[1]) <= 3)
    {
        cout << 1 << endl;
        return;
    }

    // 2
    // 斜め*斜め
    if (abs(r[0] + c[0]) % 2 == abs(r[1] + c[1]) % 2)
    {
        cout << 2 << endl;
        return;
    }
    // 周り*斜め
    if (abs(r[0] + c[0] - r[1] - c[1]) <= 3 or abs(r[0] - c[0] - r[1] + c[1]) <= 3)
    {
        cout << 2 << endl;
        return;
    }
    // マンハッタン距離
    if (abs(r[0] - r[1]) + abs(c[0] - c[1]) <= 6)
    {
        cout << 2 << endl;
        return;
    }

    cout << 3 << endl;
    return;
}

signed main()
{
    std::vector<long long> r(2);
    std::vector<long long> c(2);
    for (int i = 0; i < 2; i++)
    {
        scanf("%lld", &r[i]);
        scanf("%lld", &c[i]);
    }
    solve(std::move(r), std::move(c));
    return 0;
}
