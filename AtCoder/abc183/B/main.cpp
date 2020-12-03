#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(double Sx, double Sy, double Gx, double Gy)
{
    Gy *= -1;
    double ans = (double)Gx - ((double)Gy * ((double)Sx - Gx) / ((double)Sy - Gy));
    printf("%.10lf\n", ans);
}

signed main()
{
    long long S_x;
    scanf("%lld", &S_x);
    long long S_y;
    scanf("%lld", &S_y);
    long long G_x;
    scanf("%lld", &G_x);
    long long G_y;
    scanf("%lld", &G_y);
    solve(S_x, S_y, G_x, G_y);
    return 0;
}
