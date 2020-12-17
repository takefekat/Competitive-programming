#!/usr/bin/env python
# -*- coding: utf-8 -*-
from sys import stdin

K = int(stdin.readline().rstrip())
A, B = [int(x) for x in stdin.readline().rstrip().split()]

ans = 'NG'
for i in range(A, B+1):  # A~Bの全ての値を、全部Kで割ってみる
    if i % K == 0:      # K で割り切れるならば、OK。一度も割り切れる数字がないなら、NG
        ans = 'OK'


print(range(3, 5))
