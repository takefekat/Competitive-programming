#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<vll> vvll;

int main() {
    ld N, x0, y0, xh, yh;
    cin >> N >> x0 >> y0 >> xh >> yh;

    ld cx = (xh + x0) / 2;
    ld cy = (yh + y0) / 2;
    // printf("%.10Lf %.10Lf\n", cx, cy);

    ld theta = (2 * M_PI / N);
    ld ax = cos(theta) * x0 - sin(theta) * y0 + cx - cx * cos(theta) +
            cy * sin(theta);
    ld ay = sin(theta) * x0 + cos(theta) * y0 + cy - cx * sin(theta) -
            cy * cos(theta);
    printf("%.10Lf %.10Lf\n", ax, ay);
    return 0;
}
