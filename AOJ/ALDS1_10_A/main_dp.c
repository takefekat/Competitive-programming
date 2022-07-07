#include <stdio.h>
typedef long long ll;

ll dp[100];  // C言語の場合ランダムな値が入っているので、初期化が必要。

ll fib(ll n) {  // 再帰関数（自分自身をコールする関数）

    if(n == 0 || n == 1) return 1;
    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    ll n;
    scanf("%lld", &n);  // 標準入力

    ll i;
    for(i = 0; i < 100; i++) {  // dp配列の初期化
        dp[i] = -1;
    }
    ll ans = fib(n);
    printf("%lld\n", ans);  // 標準出力
}