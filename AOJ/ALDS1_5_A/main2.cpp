#include <stdio.h>

int N;
int A[300];
int Q;
int M[300];

bool solve(int i, int sum, int m) {
    if(i == N) {  // 終了条件
        if(sum == m) {
            return true;
        } else {
            return false;
        }
    }
    return solve(i + 1, sum + A[i], m) || solve(i + 1, sum, m);
}

int main() {
    // 入力
    scanf("%d", &N);  // N
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);  // A[i]
    }
    scanf("%d", &Q);  // Q
    for(int i = 0; i < Q; i++) {
        scanf("%d", &M[i]);  // M[i]
    }

    // M[i]がAの和になるか？
    for(int i = 0; i < Q; i++) {
        if(solve(0, 0, M[i]) == true) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
}
