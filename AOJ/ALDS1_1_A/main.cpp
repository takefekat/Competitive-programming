#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

void insertionSort(vll &A, ll N) {  // N個の要素を含む0-オリジンの配列A
    for (ll i = 0; i < N; i++) {
        ll v = A[i];
        ll j = i - 1;
        while (j >= 0 and A[j] > v) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;

        for (ll i = 0; i < N; i++) {
            cout << A[i];
            if (i == N - 1)
                cout << endl;
            else
                cout << " ";
        }
    }
}

int main() {
    ll N;
    cin >> N;

    vll A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }
    insertionSort(A, N);
}