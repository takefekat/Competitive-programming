
#include <iostream>
#include <vector>
using namespace std;
#include <string>
typedef long long ll;

const ll INF = 1LL << 60;  // 十分大きな値
int main() {
    ll N;
    cin >> N;
    vector<ll> a(N);
    for (ll i = 0; i < N; ++i) cin >> a[i];
    vector<ll> array = a;

    // 隣接の和が最小の場所を探して足していくのを繰り返す
    for (ll i = 0; i < N; ++i) {
        ll min_id = 0;
        ll min_val = INF;
        // 隣接の和が最小になる場所を探す
        for (ll j = 0; j < N - i; j++) {
            if (array[j] + array[j + 1] < min_val) {
                min_val = array[j] + array[j + 1];
                min_id = j;
            }
        }
        // if ( i == N-1) break;
        array.erase(array.begin() + min_id + 1);
        array[min_id] = min_val;
    }
    //​cout << min_val << endl;
}