#include <bits/stdc++.h>
using namespace std;
using ld = long double;


int main() {
    // in
    ld x, y, d;
    cin >> x >> y >> d;

    // compute
    ld ans_x = cos(d * 2 * M_PI / 360.0) * x - sin(d * 2 * M_PI / 360.0) * y;
    ld ans_y = sin(d * 2 * M_PI / 360.0) * x + cos(d * 2 * M_PI / 360.0) * y;

    // out
    printf("%.10Lf %.10Lf\n", ans_x, ans_y);
    return 0;
}
