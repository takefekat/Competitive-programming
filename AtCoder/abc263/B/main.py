N = int(input())
P = list(map(int, input().split()))

ans = [0]

for x in P:
    res = ans[x-1] + 1
    ans.append(res)

print(ans[N-1])

