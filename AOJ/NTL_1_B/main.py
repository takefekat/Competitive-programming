
MOD = 1000000007

def mypow(N, M):
    if M == 0:
        return 1
    if M % 2==0:
        return mypow(N * N % MOD, M // 2);
    else:
        return mypow(N * N % MOD, M // 2) * N % MOD;

N, M = list(map(int, input().split()))


print(mypow(N,M))

