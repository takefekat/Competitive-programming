# -*- coding: utf-8 -*-
import math


# input() : 入力を1行 受け取る
# .split() : 空白区切りで、配列にする ex. "3 4" --> ["3", "4"]


X, Y = map(int, input().split())

# 四則演算：　+, -, *, //, /, %, **

# 解法1
if X >= Y :
    ans = 0
else:
    ans = math.ceil( (Y - X ) / 10 )

# 解法2
if X >=Y :
    ans = 0
else:
    ans = (Y - X + 9) // 10

# 解法3
if X >= Y:
    ans = 0
elif (Y - X) % 10 == 0:
    ans = (Y - X) // 10 # / を使うと　30 / 10 --> 3.0 これだとNG
else:
    ans = (Y - X) // 10 + 1

print(ans)
