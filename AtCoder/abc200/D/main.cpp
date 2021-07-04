#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const long long MOD = 200;
const string YES = "Yes";
const string NO = "No";

struct stat {
    ll yy;
    ll xx;
    stat(ll yyt, ll xxt) {
        yy = yyt;
        xx = xxt;
    };
};

void solve(long long N, std::vector<long long> A) {
    vll ama(N, 0);
    for (ll i = 0; i < N; i++) {
        ama[i] = A[i] % 200;
    }

    vvll dp(N + 1, vll(210, 0));
    dp[0][0] = 1;
    vector<vector<stat>> b1(N + 1, vector<stat>(210, stat(-1, -1)));
    vector<vector<stat>> b2(N + 1, vector<stat>(210, stat(-1, -1)));

    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j <= 200; j++) {
            if (dp[i][j] == 0) continue;

            dp[i + 1][j] += dp[i][j];
            b1[i + 1][j] = {i, j};
            if (b2[i + 1][j].yy == -1 and b2[i + 1][j].xx == -1)
                b2[i + 1][j] = stat(i, j);

            dp[i + 1][(j + ama[i]) % 200] += dp[i][j];
            b1[i + 1][(j + ama[i]) % 200] = {i, j};
            if (b2[i + 1][(j + ama[i]) % 200].xx == -1 and
                b2[i + 1][(j + ama[i]) % 200].yy == -1) {
                b2[i + 1][(j + ama[i]) % 200] = stat(i, j);
            }
        }
    }
    string ans = NO;
    for (ll i = 0; i <= 200; i++) {
        if ((i == 0 and dp[N][i] > 2) or (i > 0 and dp[N][i] > 1)) {
            cout << YES << endl;
            ans = YES;

            vll B;
            stat cur = stat(N, i);
            stat pre = b1[N][i];

            while (cur.xx != 0 and cur.yy != 0) {
                if (cur.xx != pre.xx) {
                    B.push_back(cur.yy);
                }
                cur = pre;
                pre = b1[cur.yy][cur.xx];
            }

            vll C;
            cur = stat(N, i);
            pre = b2[N][i];
            while (cur.xx != 0 and cur.yy != 0) {
                if (cur.xx != pre.xx) {
                    C.push_back(cur.yy);
                }
                cur = pre;
                pre = b2[cur.yy][cur.xx];
            }

            reverse(B.begin(), B.end());
            reverse(C.begin(), C.end());

            cout << B.size() << " ";
            for (ll i = 0; i < B.size(); i++) {
                cout << B[i];
                if (i == B.size() - 1)
                    cout << endl;
                else
                    cout << " ";
            }

            cout << C.size() << " ";
            for (ll i = 0; i < C.size(); i++) {
                cout << C[i];
                if (i == C.size() - 1)
                    cout << endl;
                else
                    cout << " ";
            }
            break;
        }
    }
    if (ans != YES) cout << NO << endl;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    solve(N, std::move(A));
    return 0;
}
