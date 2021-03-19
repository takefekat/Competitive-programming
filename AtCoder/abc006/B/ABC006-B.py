N = int(input())
dp = [0]*(N+2)
dp[0] = 0
dp[1] = 0
dp[2] = 1

for i in range(N-3):
    dp[i+3] = dp[i] + dp[i+1] + dp[i+2]

print(dp[N-1])

