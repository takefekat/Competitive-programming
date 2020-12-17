# -*- coding: utf-8 -*-
from sys import stdin

S, W = [int(x) for x in stdin.readline().rstrip().split()]

if W >= S:
    print('unsafe')
else:
    print('safe')
