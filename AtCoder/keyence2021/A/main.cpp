#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

// aが値渡し
void chmin1(ll a, ll b) {
    if (a > b) a = b;
}

// aが参照渡し
void chmin2(ll& a, ll b) {
    if (a > b) a = b;
}

int min(int a, int b) {
    if (a > b)
        return b;
    else
        return a;
}

int main() {
    ll a, b;

    cin >> a >> b;

    chmin1(a, b);
    cout << a << " " << b << endl;

    chmin2(a, b);
    cout << a << " " << b << endl;
}
