from itertools import chain, combinations
import itertools
from sys import stdin
import numpy as np


def powerset(iterable):
    "powerset([1,2,3]) --> () (1,) (2,) (3,) (1,2) (1,3) (2,3) (1,2,3)"
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))


N, M, X = [int(x) for x in stdin.readline().rstrip().split()]
data = []
for i in range(N):
    line = [int(x) for x in stdin.readline().rstrip().split()]
    data.append(line)

L = list(range(N))

Ansdata = []
for j in powerset(L):
    A = np.array([0] * (M + 1))

    for k in j:
        A += np.array(data[k])

    flag = True
    if all(n >= X for n in A[1:]) == True:
        Ansdata.append(A)
    else:
        pass


if len(Ansdata) == 0:
    print(-1)
else:
    A = 100000000
    for l in range(len(Ansdata)):
        A = min(Ansdata[l][0], A)
    print(A)
