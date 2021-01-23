from sys import stdin

N, K = [int(x) for x in stdin.readline().rstrip().split()]
listh = [int(x) for x in stdin.readline().rstrip().split()]


def chmin(a, b):
    if a > b:
        a = b
    else:
        pass


def chmin2(dp, i, b):
    if dp[i] > b:
        dp[i] = b   # dpはミュータブルなので更新できる
    else:
        pass


dp = [1000000000] * N
dp[0] = 0


for i in range(1, N):
    for j in range(1, min(K, i) + 1):

        chmin2(dp, i, dp[i-j]+abs(listh[i]-listh[i-j]))
        #chmin(dp[i], dp[i-j]+abs(listh[i]-listh[i-j]))
        # if dp[i] > dp[i - j] + abs(listh[i] - listh[i - j]):
        #    dp[i] = dp[i-j]+abs(listh[i]-listh[i-j])


print(dp[-1])
