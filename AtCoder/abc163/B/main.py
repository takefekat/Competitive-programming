# -*- coding: utf-8 -*-
from sys import stdin

A, B, C, D = [int(x) for x in stdin.readline().rstrip().split()]

while True:
    C -= B
    if C <= 0:
        print('Yes')
        break
    A -= D
    if A <= 0:
        print('No')
        break
