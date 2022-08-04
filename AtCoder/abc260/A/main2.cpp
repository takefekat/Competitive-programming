#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;  // 入力

    for(int i = 0; i < S.size(); i++) {
        cout << S[i] << endl;
    }

    for(char c : S) {
        cout << c << endl;
    }
}