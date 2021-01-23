import math
import itertools
from sys import stdin

K = int(stdin.readline().rstrip())

numlist = list(range(1, K+1))

A = 0
for i in numlist:
    for j in numlist:
        for k in numlist:
            A += math.gcd(math.gcd(i, j), k)

print(A)
