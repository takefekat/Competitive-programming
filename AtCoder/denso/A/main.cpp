#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vll;
typedef vector<vll> vvll;

ll N;
vll B(3);

ll pointCheck(vvll& v, vll& bb) {
    ll point = 0;
    // tate
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int now = 0;
            for (int k = i; k < N; k++) {
                now += v[k][j];
                if (now == bb[0]) point += bb[0];
                if (now == bb[1]) point += bb[1];
                if (now == bb[2]) point += bb[2];
                if (now > bb[2]) break;
            }
        }
    }
    // yoko
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int now = 0;
            for (int k = j; k < N; k++) {
                now += v[i][k];
                if (now == bb[0]) point += bb[0];
                if (now == bb[1]) point += bb[1];
                if (now == bb[2]) point += bb[2];
                if (now > bb[2]) break;
            }
        }
    }
    return point;
}

unsigned int randxor() {
    static unsigned int x = 123456789, y = 362436069, z = 521288629,
                        w = 88675123;
    unsigned int t;
    t = (x ^ (x << 11));
    x = y;
    y = z;
    z = w;
    return (w = (w ^ (w >> 19)) ^ (t ^ (t >> 8)));
}

int main() {
    srand(time(NULL));
    // 入力
    cin >> N;
    for (ll i = 0; i < 3; i++) cin >> B[i];
    vvll l(N, vll(N));
    for (ll i = 0; i < N; i++)
        for (ll j = 0; j < N; j++) cin >> l[i][j];
    vvll r(N, vll(N));
    for (ll i = 0; i < N; i++)
        for (ll j = 0; j < N; j++) cin >> r[i][j];

    // lを初期値とする
    vvll ans(N, vll(N));
    for (ll i = 0; i < N; i++)
        for (ll j = 0; j < N; j++)
            ans[i][j] = l[i][j] + rand() % (max(1, r[i][j] - l[i][j] + 1));
    // ans[i][j] = l[i][j];

    // 貪欲
    for (ll x = 0; x < 20; x++) {
        for (ll i = 0; i < N; i++) {
            for (ll j = 0; j < N; j++) {
                ll tmp = ans[i][j];
                ll base_p = pointCheck(ans, B);

                ll max_p = base_p;
                ll tmp_k = ans[i][j];
                for (ll k = l[i][j]; k <= r[i][j]; k++) {
                    ans[i][j] = k;
                    ll tmp_p = pointCheck(ans, B);
                    if (tmp_p > max_p) {
                        max_p = tmp_p;
                        tmp_k = k;
                    }
                }
                ans[i][j] = tmp_k;
            }
        }
    }

    for (ll i = 0; i < N; i++)
        for (ll j = 0; j < N; j++) {
            printf("%Ld", ans[i][j]);
            if (j == N - 1)
                printf("\n");
            else
                printf(" ");
        }
}