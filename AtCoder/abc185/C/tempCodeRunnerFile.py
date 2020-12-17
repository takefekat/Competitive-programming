# -*- coding: utf-8 -*-
from sys import stdin

L = [int(x) for x in stdin.readline().rstrip().split()]
ans = 1

for i in range(L-11, L):
    ans *= i
for i in range(1, 12):
    ans /= i
