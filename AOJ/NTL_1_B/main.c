#include <stdio.h>

const long long MOD = 1000000007;

long long my_pow(long long N, long long M) {
    // 終了条件
    if(M == 0) {
        return 1;
    }
    // 偶数
    if(M % 2 == 0) {
        return my_pow(N * N % MOD, M / 2);
    }
    // 奇数
    else {
        return my_pow(N * N % MOD, M / 2) * N % MOD;
    }
}

int main() {
    long long N, M;  // 8Byte

    // 入力
    scanf("%lld %lld", &N, &M);

    // 処理
    long long res = my_pow(N, M);

    // 出力
    printf("%lld\n", res);
}