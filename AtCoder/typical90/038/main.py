import math
import sys

A, B = [ int(_) for _ in sys.stdin.readline().split()]

ans = A * B // math.gcd(A,B)

if ans > 1000000000000000000:
    print("Large")
else:
    print(ans)