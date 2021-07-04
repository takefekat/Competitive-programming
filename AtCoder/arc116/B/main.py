N = int(input())
a = list(map(int, input().split()))
a.sort()

Sum = [0]
ans = 0
for i in range(N):
    Sum.append(Sum[i] * 2 % 998244353 + a[i])
    #print(Sum[i] * 2 + a[i])
    Sum[i] = (Sum[i] + a[i]) % 998244353

# print(Sum)


for i in range(N):
    ans += (a[i] * Sum[i]) % 998244353

ans = ans % 998244353

print(ans)
