#!/usr/bin/env python
# -*- coding: utf-8 -*-

from sys import stdin

# N,Kの入力
N, K = [int(x) for x in stdin.readline().rstrip().split()]

# dとAをそれぞれ2次元配列で入力
d = [[] for i in range(K)]
A = [[] for i in range(K)]
for i in range(K):
    d[i].append(int(stdin.readline().rstrip()))
    A[i].append([int(x) for x in stdin.readline().rstrip().split()])

print(N)
print(K)
print(d)
print(A)
