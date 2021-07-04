#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

struct card {
    string s;
    ll d;
    bool operator<(const card& c) const { return c < c.d; }
};

void partition(vector<card>& A, ll p, ll r) {
    ll x = A[r];
    ll i = p - 1;
    for (ll j = p; j <= r - 1; j++) {
        if (A[j] <= x) {
            ll i = i + 1;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quicksort(vector<card>& A, ll p, ll r) {
    f(p < r) {
        ll q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main() {
    ll N;
    cin >> N;
    vector<card> A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i].s >> A[i].d;
    }
    quicksort(A, 0, N);
}