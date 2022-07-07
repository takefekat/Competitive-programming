#include <iostream>
#include <vector>
using namespace std;

int main() {
    //入力
    int N, M;
    cin >> N >> M;

    vector<int> A(M, 0), B(M, 0);
    for(int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    //処理
    vector<vector<string>> tbl(N, vector<string>(N, "-"));

    for(int i = 0; i < M; i++) {
        tbl[A[i] - 1][B[i] - 1] = "o";
        tbl[B[i] - 1][A[i] - 1] = "x";
    }

    //出力
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << tbl[i][j];
            if(j == N - 1)
                cout << endl;
            else
                cout << " ";
        }
    }
}