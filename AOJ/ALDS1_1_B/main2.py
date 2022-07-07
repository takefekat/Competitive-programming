import math

def gcd(x, y):
    yaku = []
    for d in range(int(math.sqrt(y))+1, 0, -1):
        if y % d == 0:
            yaku.append(d)
            yaku.append(int(y/d))
    
    yaku.sort()
    yaku.reverse()

    for d in yaku:
        if x%d == 0:
            return d

x, y = list(map(int, input().split()))

if x == y:
    print(x)
else:
    print(gcd(x,y))