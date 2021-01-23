import bisect
from sys import stdin

N, K = [int(x) for x in stdin.readline().rstrip().split()]
listA = [int(x) for x in stdin.readline().rstrip().split()]
listA.sort()

listB = []
for i in range(0, N):
    a = bisect.bisect_right(listA, i)
    del listA[0:a]
    if a != 0:
        listB.append(a)
    else:
        break

val = listB[0]
for j in range(0, len(listB)):
    if val < listB[j]:
        listB[j] = val
    else:
        pass
    val = listB[j]

m = listB[0]
Ans = 0
for k in range(0, min(m, K)):
    Ans += len(listB)
    listB = list(map(lambda x: x-1, listB))
    listB = [l for l in listB if l != 0]

print(Ans)
