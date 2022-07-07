#include "stdio.h"
typedef long long ll;

ll fib(ll n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    ll n;
    scanf("%lld", &n);

    ll ans = fib(n);

    printf("fib(%lld) = %lld\n", n, ans);
}