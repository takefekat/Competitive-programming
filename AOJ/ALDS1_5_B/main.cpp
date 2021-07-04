#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

ll ans = 0;
void merge(vll& A, ll left, ll mid, ll right) {
    ll n1 = mid - left;
    ll n2 = right - mid;
    vll L(n1 + 1), R(n2 + 1);
    for (ll i = 0; i < n1; i++) L[i] = A[left + i];
    for (ll i = 0; i < n2; i++) R[i] = A[mid + i];

    for (ll i = 0; i < n2; i++) {
        R[i] = A[mid + i];
        L[n1] = INT_MAX;
        R[n2] = INT_MAX;
    }
    ll i = 0;
    ll j = 0;
    for (ll k = left; k < right; k++) {
        ans++;
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i = i + 1;

        } else {
            A[k] = R[j];
            j = j + 1;
        }
    }
}

void mergeSort(vll& A, ll left, ll right) {
    if (left + 1 < right) {
        ll mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}
int main() {
    ll N;
    cin >> N;
    vll A(N);
    for (ll i = 0; i < N; i++) {
        cin >> A[i];
    }

    mergeSort(A, 0, N);
    for (ll i = 0; i < N; i++) {
        cout << A[i];
        if (i == N - 1)
            cout << endl;
        else
            cout << " ";
    }
    cout << ans << endl;
}