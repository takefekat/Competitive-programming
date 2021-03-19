#include "testlib.h"
using namespace std;
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    setName("chokudai contest 004");
    registerTestlibCmd(argc, argv);

    try {
        int N = inf.readInt(30, 30, "invalid N");
        vector<int> B(3);
        B[0] = inf.readInt(10, 19, "invalid B[0]");
        B[1] = inf.readInt(20, 29, "invalid B[1]");
        B[2] = inf.readInt(30, 39, "invalid B[2]");
        inf.readEoln();

        vector<vector<int> > L(N, vector<int>(N));

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                L[i][j] = inf.readInt(1, 9, "invalid L");
            }
            inf.readEoln();
        }

        vector<vector<int> > R(N, vector<int>(N));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                R[i][j] = inf.readInt(L[i][j], 9, "invalid R");
            }
            inf.readEoln();
        }
        inf.readEoln();
        inf.readEof();

        vector<vector<int> > ret(N, vector<int>(N));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                ret[i][j] = ouf.readInt(L[i][j], R[i][j], "invalid ret");
            }
        }

        quitf(_ok, "Correct");
    } catch (char* str) {
        cerr << "error: " << str << endl;
        quitf(_wa, "Something error occured.");
    }
}
