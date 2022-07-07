#include <stdio.h>

int N;
int S[50];

void rec(int i) {
    if(i == N) {
        for(int j = 0; j < N; j++) {
            printf("%d ", S[j]);
        }
        printf("\n");
        return;
    }

    rec(i + 1);
    S[i] = 1;
    rec(i + 1);
    S[i] = 0;
}

void makeCombination() {
    for(int i = 0; i < N; i++) {
        S[i] = 0;
    }
    rec(0);
}

int main() {
    scanf("%d", &N);
    makeCombination();
}