dp = [-1]*100

def fib(n):
    if n == 0 or n == 1:
        return 1
    if dp[n] != -1:
        return dp[n]
    dp[n] = fib(n-1) + fib(n-2)
    return dp[n]

def main():
    n = int(input())
    print(fib(n))

main()