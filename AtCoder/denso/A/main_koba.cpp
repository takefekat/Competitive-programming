#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pint;
typedef pair<ll, ll> pll;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<string> vstr;
typedef vector<pint> vpint;
typedef vector<pll> vpll;
#define vint2(v, n, m, init) vector<vector<int>> v(n, vector<int>(m, init))
#define vll2(v, n, m, init) vector<vector<ll>> v(n, vector<ll>(m, init))
#define rep(i, n) for (ll i = (ll)0; i < (ll)n; i++)
#define REP(i, m, n) for (ll i = (ll)m; i < (ll)n; i++)
#define arr(var, n) \
    vint var(n);    \
    rep(i, n) { cin >> var[i]; }
#define arrll(var, n) \
    vll var(n);       \
    rep(i, n) { cin >> var[i]; }
#define arrst(var, n) \
    vstr var(n);      \
    rep(i, n) { cin >> var[i]; }
#define ALL(var) (var).begin(), (var).end()
#define sortall(var) sort(ALL(var))
#define uniqueall(v) v.erase(unique(v.begin(), v.end()), v.end());
#define prt(var) cout << (var) << "\n"
#define prt2(v1, v2) cout << (v1) << " " << (v2) << "\n"
#define prt3(v1, v2, v3) cout << (v1) << " " << (v2) << " " << (v3) << "\n"
#define prtd(n, var) cout << fixed << setprecision(n) << (var) << "\n"
#define prtfill(n, var) cout << setw(n) << setfill('0') << (var);
#define prtall(v) \
    rep(i, v.size()) { cout << v[i] << (i != v.size() - 1 ? " " : "\n"); }
template <typename T>
bool chmax(T& a, const T& b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template <typename T>
bool chmin(T& a, const T& b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
//----------------------------------------------------------------------------
int N;
ll pointCheck(vector<vector<ll>> v, vector<int> B) {
    ll point = 0;
    // tate
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int now = 0;
            for (int k = i; k < N; k++) {
                now += v[k][j];
                if (now == B[0]) point += B[0];
                if (now == B[1]) point += B[1];
                if (now == B[2]) point += B[2];
                if (now > B[2]) break;
            }
        }
    }
    // yoko
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int now = 0;
            for (int k = j; k < N; k++) {
                now += v[i][k];
                if (now == B[0]) point += B[0];
                if (now == B[1]) point += B[1];
                if (now == B[2]) point += B[2];
                if (now > B[2]) break;
            }
        }
    }
    return point;
}

int main(void) {
    ß int cycle = 50000;
    srand(time(NULL));
    cin >> N;
    arr(b, 3);
    vll2(l, N, N, 0);
    vll2(r, N, N, 0);
    vll2(v, N, N, 0);
    rep(i, N) {
        rep(j, N) {
            cin >> l[i][j];
            v[i][j] = l[i][j];
        }
    }
    rep(i, N) {
        rep(j, N) { cin >> r[i][j]; }
    }
    ll pt = pointCheck(v, b);
    rep(_, cycle) {
        vll2(tmpv, N, N, 0);
        rep(i, N) {
            rep(j, N) {
                tmpv[i][j] = l[i][j] + rand() % (r[i][j] - l[i][j] + 1);
            }
        }
        ll tmp = pointCheck(tmpv, b);
        if (pt < tmp) {
            pt = tmp;
            v = tmpv;
        }
    }
    for (auto k : v) {
        prtall(k);
    }
}