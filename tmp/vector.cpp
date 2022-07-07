#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 5;
    vector<double> vec(N);

    // 標準入力
    for(int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    // 標準出力
    for(int i = 0; i < N; i++) {
        cout << vec[i] << endl;
    }
}